/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 09:36:16 by jbester           #+#    #+#             */
/*   Updated: 2016/07/25 11:57:18 by jbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Copies string from memory block src to memory block dst until finds char c, then 
returns pointer to byte just after that*/

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*dst;
	unsigned char	*source;
	unsigned char	letter;

	i = 0;
	dst = (unsigned char *)dest;
	source = (unsigned char *)src;
	letter = (unsigned char)c;	
	i = 0;
	while (i < n)
	{
		if ((*dst++ = *source++) == letter)
			return (dst);
		i++;
	}
	return (NULL);
}
