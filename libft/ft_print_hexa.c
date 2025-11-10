/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolinas <smolinas@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 11:55:32 by smolinas          #+#    #+#             */
/*   Updated: 2025/08/20 11:34:07 by smolinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_hexa(unsigned int n, char specifier)
{
	int		count;
	char	*hexa;
	char	*hexa_upper;

	count = 0;
	hexa = "0123456789abcdef";
	hexa_upper = "0123456789ABCDEF";
	if (n >= 16)
	{
		count += ft_print_hexa((n / 16), specifier);
	}
	n = n % 16;
	if (specifier == 'x')
		count += ft_print_char(hexa[n]);
	else if (specifier == 'X')
		count += ft_print_char(hexa_upper[n]);
	else
		return (count);
	return (count);
}
