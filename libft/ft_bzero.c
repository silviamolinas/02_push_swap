/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolinas <smolinas@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:34:41 by smolinas          #+#    #+#             */
/*   Updated: 2025/07/29 15:01:16 by smolinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *block, size_t n)
{
	unsigned char	*pointer;
	size_t			i;

	pointer = (unsigned char *) block;
	i = 0;
	while (n > i)
	{
		pointer[i] = 0;
		i++;
	}
}
