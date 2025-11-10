/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolinas <smolinas@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 11:55:32 by smolinas          #+#    #+#             */
/*   Updated: 2025/08/20 11:35:19 by smolinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_u(unsigned int number)
{
	char	c;
	int		count;

	count = 0;
	if (number >= 10)
		count += ft_print_u(number / 10);
	c = (char)(number % 10 + '0');
	count += write (1, &c, 1);
	return (count);
}
