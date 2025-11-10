/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolinas <smolinas@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 11:26:21 by smolinas          #+#    #+#             */
/*   Updated: 2025/07/29 13:22:09 by smolinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len_d;
	size_t	len_s;

	i = 0;
	len_d = 0;
	len_s = ft_strlen(src);
	while (dest[len_d] != '\0' && len_d < size)
	{
		len_d++;
	}
	if (size <= len_d)
		return (size + len_s);
	while (src[i] != '\0' && (len_d + i) < (size - 1))
	{
		dest[len_d + i] = src[i];
		i++;
	}
	if (len_d + i < size)
		dest[len_d + i] = '\0';
	return (len_d + len_s);
}
