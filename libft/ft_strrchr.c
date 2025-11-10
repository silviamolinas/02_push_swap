/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolinas <smolinas@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 14:38:22 by smolinas          #+#    #+#             */
/*   Updated: 2025/08/05 14:00:57 by smolinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*lastchar;
	unsigned char	uc;

	lastchar = NULL;
	uc = (unsigned char) c;
	while (*s != '\0')
	{
		if (*s == uc)
			lastchar = s;
		s++;
	}
	if (uc == '\0')
		return ((char *) s);
	return ((char *) lastchar);
}
