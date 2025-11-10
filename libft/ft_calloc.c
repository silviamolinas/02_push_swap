/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolinas <smolinas@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 11:09:10 by smolinas          #+#    #+#             */
/*   Updated: 2025/08/13 15:02:50 by smolinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*ptr;
	size_t			total;
	unsigned char	*tozero;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	total = nmemb * size;
	ptr = (void *) malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	tozero = (unsigned char *)ptr;
	while (total--)
	{
		*tozero = 0;
		tozero++;
	}
	return (ptr);
}
