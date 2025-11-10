/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolinas <smolinas@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:14:37 by smolinas          #+#    #+#             */
/*   Updated: 2025/08/05 12:34:24 by smolinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int			i;
	size_t		len;
	char		*newpointer;

	len = ft_strlen(s);
	newpointer = malloc(sizeof(char) * (len + 1));
	if (!newpointer)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		newpointer[i] = s[i];
		i++;
	}
	newpointer[i] = '\0';
	return ((char *)newpointer);
}
