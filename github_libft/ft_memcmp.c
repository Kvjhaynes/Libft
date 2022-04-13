/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:28:34 by khaynes           #+#    #+#             */
/*   Updated: 2021/09/25 11:06:33 by khaynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This fucntions compares byte string S1 against byte string S2.
 * Both strings are assumed to be N bytes long. The ft_memcmp 
 * function returns 0 if the two strings are identical, otherwise it returns
 * the difference between the first two differing bytes. */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
	/*We start by creating two char pointer variables that we will be placing
	 * char casted versions of our parameters s1 and s2 inside. We also create
	 * a size_t variable i to count through the index positions of str1 and
	 * str2 as well as use it to compare to the parameter n which is also a
	 * size_t. We set i equal to 0 and we place the casted versions of s1 and
	 * s2 into str1 and str2. We then start our loop.
     * So long as i is less than the given n we will want our loop to continue.
	 * But if at any point before then, and if we reach an index position where
	 * the character in str1 is not the same as str2, we want to immediately
	 * return the difference between the two differing unsigned char casted
	 * bytes. If i reaches the point where it is no longer less than n and we
	 * have still not found any differing bytes we will return a 0 to say that
	 * both byte strings are the same.*/
