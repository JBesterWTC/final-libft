/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 08:28:30 by jbester           #+#    #+#             */
/*   Updated: 2016/07/25 12:20:06 by jbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Copies string src to dest while less than len*/

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	count;

	count = 0;
	while ((count < len) && (src[count] || dst[count]))
	{
		dst[count] = src[count];
		count++;
	}
	
	return (dst);
}
