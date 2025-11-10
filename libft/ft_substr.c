/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolinas <smolinas@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 18:18:05 by smolinas          #+#    #+#             */
/*   Updated: 2025/08/05 19:31:22 by smolinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	string_len;

	string_len = ft_strlen(s);
	if (start >= string_len)
	{
		sub = (ft_strdup(""));
		if (!sub)
			return (NULL);
		return (sub);
	}
	if ((string_len - start) < len)
		len = string_len - start;
	sub = (char *) malloc(sizeof(char) * len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (s[start + i] != '\0' && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
