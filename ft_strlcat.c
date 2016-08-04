/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 11:19:06 by jbester           #+#    #+#             */
/*   Updated: 2016/07/21 11:24:34 by jbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	c;
	size_t	a;

	i = size - ft_strlen(dst) - 1;
	c = 0;
	a = 0;
	while (dst[++c] != '\0')
		;
	while ((a < i) && (a < size))
	{
		dst[c] = src[a];
		a++;
		c++;
	}
	dst[c] = '\0';
	return (a);
}
