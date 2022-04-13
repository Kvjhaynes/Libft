/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:31:55 by khaynes           #+#    #+#             */
/*   Updated: 2021/09/28 16:09:27 by khaynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*the strnstr function locates the first occurence of the null
 *  terminated string S2 in the string S1, where not more than n
 *  characters are searched, charcters that appear after a '\0' 
 *  character are not searched. */
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	j;
	size_t	i;
	size_t	size;

	i = 0;
	size = 0;
	while (s2[size])
		size++;
	if (size == 0)
		return ((char *)s1);
	while (s1[i])
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			while (s1[i + j] == s2[j] && (i + j) < n)
			{
				if (j == size - 1)
					return ((char *)s1 + i);
				j++;
			}
		}
		i++;
	}
	return (0);
}
