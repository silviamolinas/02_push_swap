/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolinas <smolinas@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:40:31 by smolinas          #+#    #+#             */
/*   Updated: 2025/07/29 10:29:48 by smolinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *block, int c, size_t size)
{
	size_t				i;
	unsigned char		uc;
	const unsigned char	*b;

	i = 0;
	uc = (unsigned char) c;
	b = (const unsigned char *) block;
	while (i < size)
	{
		if (b[i] == uc)
		{
			return ((void *) b + i);
		}
		i++;
	}
	return (NULL);
}
