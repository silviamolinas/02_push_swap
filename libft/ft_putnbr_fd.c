/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolinas <smolinas@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 13:10:37 by smolinas          #+#    #+#             */
/*   Updated: 2025/08/05 13:17:42 by smolinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	number;

	number = (long)n;
	if (number < 0)
	{
		number = -number;
		write(fd, "-", 1);
	}
	if (number >= 10)
	{
		ft_putnbr_fd(number / 10, fd);
	}
	c = (char)(number % 10 + '0');
	write(fd, &c, 1);
}
