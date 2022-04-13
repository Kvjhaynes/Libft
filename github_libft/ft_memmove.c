/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:29:41 by khaynes           #+#    #+#             */
/*   Updated: 2021/09/25 11:12:57 by khaynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function copies len bytes from string src to string dst.
 *The two strings may overlap; the copy is always done in a
 non destructive manner. The ft_memmove function returns the
* original value of dst. */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * len);
	if (tmp == NULL)
		return (NULL);
	ft_memcpy(tmp, src, len);
	ft_memcpy(dst, tmp, len);
	free(tmp);
	return (dst);
}
/*We start by creating a char pointer variable tmp which we will use to 
	 * move len bytes of src into and then we will move the len bytes of src we
	 * placed into tmp into dst. We do this using our ft_memcpy function. But 
	 * before we do this we have to make sure to allocate memory for tmp to be 
	 * able to hold the bytes of src to move them to dst. We use our given len 
	 * parameter to determine the size of the malloc for tmp. If the allocation 
	 * fails we will return NULL. If not we will go ahead and use ft_memcpy 
	 * first on tmp, src, and len, and then we will call it again on dst, tmp, 
	 * and len. Once our memory move is finished we will then free the memory 
	 * we allocated for tmp. 
	 * And last we will return the original value of dst.*/
