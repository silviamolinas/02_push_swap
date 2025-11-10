/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolinas <smolinas@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 13:08:41 by smolinas          #+#    #+#             */
/*   Updated: 2025/08/13 12:19:51 by smolinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_free_all(char **matrix, size_t actual_position)
{
	size_t	i;

	i = 0;
	if (!matrix)
		return (NULL);
	while (i < actual_position)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
	return (NULL);
}

static char	**ft_alloc_vector(char **matrix, char const *s, char c)
{
	size_t		i;
	const char	*s_run;
	const char	*start;

	i = 0;
	s_run = s;
	while (*s_run != '\0')
	{
		while (*s_run == c && *s_run != '\0')
			s_run++;
		start = s_run;
		while (*s_run != c && *s_run != '\0')
			s_run++;
		if (s_run > start)
		{
			matrix[i] = ft_substr(start, 0, (s_run - start));
			if (!matrix[i])
				return (ft_free_all(matrix, i));
			i++;
		}
	}
	matrix[i] = NULL;
	return (matrix);
}

static size_t	ft_count_vector(char const *text, char delimiter)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (text[i] != '\0')
	{
		while (text[i] == delimiter && text[i] != '\0')
			i++;
		if (text[i] != delimiter && text[i] != '\0')
		{
			count = count + 1;
			while (text[i] != delimiter && text[i] != '\0')
				i++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	n_vector;
	char	**matrix;

	if (!s)
		return (NULL);
	n_vector = ft_count_vector(s, c);
	matrix = (char **) malloc((n_vector + 1) * (sizeof(char *)));
	if (!matrix)
		return (NULL);
	matrix[n_vector] = NULL;
	if (!ft_alloc_vector(matrix, s, c))
		return (NULL);
	return (matrix);
}
