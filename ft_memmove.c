/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 10:08:02 by jbester           #+#    #+#             */
/*   Updated: 2016/07/25 12:00:17 by jbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Copies len bytes from string src to string dst*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		count1;
	size_t		count2;
	char		*dest;
	const char	*source;
	char		temp[len];

	count1 = 0;
	count2 = 0;
	dest = (char *)dst;
	source = (const char *)src;
	while (count1 < len)
	{
		temp[count1]= source[count1];
		count1++;
	}
	while (count2 < len)
	{
		dest[count2] = temp[count2];
		count2++;
	}
	return (dst);
}
