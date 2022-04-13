/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:13:01 by khaynes           #+#    #+#             */
/*   Updated: 2021/09/28 11:18:38 by khaynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Memset writes the len bytes of value c (which is converted to an 
 * unsigned char) to the string b. this function returns a pointer
 * to the memory area str. */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;

	p = (char *)b;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (b);
}
/*We start by creating a char string of p. This is what we will use to hold
	 * a casted version of our void b parameter. We set p equal to a char cast
	 * version of b. If you are unfamiliar with type casting, it is a way to
	 * convert a variable from one data type to another data type. We then
	 * start our loop. ft_memset nees to trust the size of len that is passed
	 * into it's parameter and it needs to work on a general piece of memory,
	 * not just a '\0' terminated string, so we can not have our loop's
	 * condition based on the usual idea that we will reach the end of a string.
	 * So in this case we say so long as the given len is greater than 0 we
	 * will continue the loop. We then move backwards through the string p
	 * placing the int c inside of each index position. We do len - 1 because
	 * we are compensating for the terminating '\0' at the end of the string
	 * that we do not want to replace. We decrement len and then start the
	 * loop over again until len is no longer greater than 0. We then return
	 * b.*/
