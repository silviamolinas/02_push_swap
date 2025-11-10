/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_n.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolinas <smolinas@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 11:55:32 by smolinas          #+#    #+#             */
/*   Updated: 2025/08/20 11:34:17 by smolinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_n(int n)
{
	char	c;
	long	number;
	int		count;

	count = 0;
	number = (long) n;
	if (number < 0)
	{
		number = -number;
		count += write(1, "-", 1);
	}
	if (number >= 10)
		count += ft_print_n(number / 10);
	c = (char)(number % 10 + '0');
	count += write (1, &c, 1);
	return (count);
}
