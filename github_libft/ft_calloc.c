/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:34:59 by khaynes           #+#    #+#             */
/*   Updated: 2021/09/25 10:45:57 by khaynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}
/* calloc allocates memory for an array of NUM objects 
 * of SIZE and initializes all bytes in the allocated storage to zero.
 * if allocation succeeds, returns a pointer to the first byte
 * in the allocated memory block. On failure, returns a NULL pointer.
 * NUM - number of objects
 * SIZE - size of each object */
