/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolinas <smolinas@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:21:25 by smolinas          #+#    #+#             */
/*   Updated: 2025/07/29 11:25:43 by smolinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//original does not return null

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pointer;
	size_t			i;

	pointer = (unsigned char *) s;
	i = 0;
	while (n > i)
	{
		pointer[i] = (unsigned char) c;
		i++;
	}
	return (s);
}
