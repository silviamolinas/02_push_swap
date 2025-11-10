/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolinas <smolinas@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 09:46:26 by smolinas          #+#    #+#             */
/*   Updated: 2025/08/13 15:07:15 by smolinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_countn(int n)
{
	size_t	count;
	long	number;

	number = n;
	count = 0;
	if (n <= 0)
		count = 1;
	if (n < 0)
		number = -number;
	while (number > 0)
	{
		number = number / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	num;
	size_t	count;
	char	*result;

	num = n;
	if (num == 0)
		return (ft_strdup("0"));
	count = ft_countn(n);
	result = (char *)malloc(sizeof(char) * (count + 1));
	if (!result)
		return (NULL);
	result[count] = '\0';
	if (num < 0)
	{
		num = -num;
		result[0] = '-';
	}
	while (num > 0 && count > 0)
	{
		result[count - 1] = (num % 10) + '0';
		num = num / 10;
		count--;
	}
	return (result);
}
