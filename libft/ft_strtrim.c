/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolinas <smolinas@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 10:58:59 by smolinas          #+#    #+#             */
/*   Updated: 2025/08/06 15:43:21 by smolinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_search_char(char const *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	if (!c)
		return ((char *) s);
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len_trim;
	int		len_s1;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	len_s1 = ft_strlen(s1);
	i = 0;
	while (s1[i] && ft_search_char(set, s1[i]))
		i++;
	while (len_s1 > i && ft_search_char(set, s1[len_s1 - 1]))
		len_s1--;
	len_trim = len_s1 - i;
	trim = ft_substr(s1, i, len_trim);
	if (!trim)
		return (NULL);
	return (trim);
}
