/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolinas <smolinas@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 11:55:32 by smolinas          #+#    #+#             */
/*   Updated: 2025/08/20 11:34:31 by smolinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_print_address(unsigned long n)
{
	int		count;
	char	*hexa;

	count = 0;
	hexa = "0123456789abcdef";
	if (n >= 16)
		count += ft_print_address(n / 16);
	n = n % 16;
	count += ft_print_char(hexa[n]);
	return (count);
}

int	ft_print_p(void *ptr)
{
	int				count;
	unsigned long	nptr;

	count = 0;
	if (!ptr)
	{
		count += write(1, "(nil)", 5);
		return (count);
	}
	nptr = (unsigned long) ptr;
	count += write (1, "0x", 2);
	count += ft_print_address(nptr);
	return (count);
}
