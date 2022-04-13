/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:31:00 by khaynes           #+#    #+#             */
/*   Updated: 2021/09/28 11:05:54 by khaynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strlcpy function copies and concatenates strings respectively.
 * unlike strncpy and strncat, strlcpy take the full size of the buffer
 * (not just the length) and guarantee to NUL-terminate the result.
 * The strlcpy() function copies up to size - 1 characters from 
 * the NUL-terminated string src to dst, NUL-terminating the result.  */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	index;

	index = 0;
	if (size > 0)
	{
		while (src[index] != '\0' && index < size - 1)
		{
			dst[index] = src[index];
			index++;
		}
		dst[index] = '\0';
	}
	index = 0;
	while (src[index] != '\0')
	{
		index++;
	}
	return (index);
}
