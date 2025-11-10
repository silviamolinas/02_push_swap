/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolinas <smolinas@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:59:24 by smolinas          #+#    #+#             */
/*   Updated: 2025/07/29 10:47:29 by smolinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *a1, const void *a2, size_t size)
{
	const unsigned char	*first;
	const unsigned char	*second;

	first = (const unsigned char *) a1;
	second = (const unsigned char *) a2;
	if (size == 0)
		return (0);
	while (size > 0)
	{
		if (*first != *second)
		{
			return (*first - *second);
		}
		first++;
		second++;
		size--;
	}
	return (0);
}
