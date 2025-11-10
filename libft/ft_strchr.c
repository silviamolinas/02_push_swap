/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolinas <smolinas@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 11:37:18 by smolinas          #+#    #+#             */
/*   Updated: 2025/07/29 11:18:49 by smolinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;

	uc = (unsigned char) c;
	while (*s != '\0')
	{
		if (*s == uc)
		{
			return ((char *) s);
		}
		s++;
	}
	if (uc == '\0')
	{
		return ((char *) s);
	}
	return (NULL);
}
