/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolinas <smolinas@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 13:33:13 by smolinas          #+#    #+#             */
/*   Updated: 2025/08/21 12:21:53 by smolinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

static int	ft_type(char specifier, va_list aptr)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_print_char(va_arg (aptr, int));
	else if (specifier == 's')
		count += ft_print_str(va_arg (aptr, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += ft_print_n(va_arg(aptr, int));
	else if (specifier == 'u')
		count += ft_print_u(va_arg(aptr, unsigned int));
	else if (specifier == 'x' || specifier == 'X')
		count += ft_print_hexa(va_arg(aptr, unsigned int), specifier);
	else if (specifier == 'p')
		count += ft_print_p(va_arg (aptr, void *));
	else
	{
		count += write(1, &specifier, 1);
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	ap;

	va_start(ap, format);
	count = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == '\0')
			count += write(1, "%", 1);
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			count += ft_type(format[i], ap);
		}
		else
			count += write (1, &format[i], 1);
		i++;
	}
	va_end(ap);
	return (count);
}
