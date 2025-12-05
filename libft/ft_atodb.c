/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atodb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolinas <smolinas@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:06:57 by smolinas          #+#    #+#             */
/*   Updated: 2025/12/04 13:08:06 by smolinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

static int	ft_isnumeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

static	int	ft_parse_sign(char c)
{
	if (c == '-')
		return (-1);
	return (1);
}

static double	ft_parse_nptr(const char *nptr, int i)
{
	double	number;
	double	fraction;
	double	divisor;

	number = 0.0;
	fraction = 0.0;
	divisor = 10.0;
	while (ft_isnumeric(nptr[i]))
	{
		number = (number * 10) + (nptr[i] - '0');
		i++;
	}
	if (nptr[i] == '.')
	{
		i++;
		while (ft_isnumeric(nptr[i]))
		{
			fraction = fraction + ((nptr[i] - '0') / divisor);
			divisor = divisor * 10.0;
			i++;
		}
	}
	number = number + fraction;
	return (number);
}

double	ft_atodb(const char *nptr)
{
	double	number;
	int		i;
	int		sign;

	number = 0.0;
	i = 0;
	sign = 1;
	while (ft_isspace(nptr[i]))
		i++;
	sign = ft_parse_sign(nptr[i]);
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	number = ft_parse_nptr(nptr, i);
	number = number * sign;
	return (number);
}
