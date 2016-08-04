/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 10:45:14 by jbester           #+#    #+#             */
/*   Updated: 2016/07/21 11:45:49 by jbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Compares 2 byte strings while length is less than n*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		count;
	const char	*str1;
	const char	*str2;

	count = 0;
	str1 = (const char *)s1;
	str2 = (const char *)s2;
	while (count < n && str1[count] == str2[count])
		count++;
	return ((unsigned char)str1[count] - (unsigned char)str2[count]);
}
