/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 09:11:37 by jbester           #+#    #+#             */
/*   Updated: 2016/07/25 11:59:50 by jbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Copies n characters from string at memory block src to memory block dst*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*tmp;
	const char	*tmp2;
	size_t		i;

	i = 0;
	tmp = (char *)dst;
	tmp2 = (const char *)src;
	while (i < n)
	{
		tmp[i] = tmp2[i];
		i++;
	}
	return (dst);
}
