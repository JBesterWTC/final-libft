/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 10:23:11 by jbester           #+#    #+#             */
/*   Updated: 2016/07/25 11:58:15 by jbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Locates a character in string s*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		count;
	char		letter;

	count = 0;
	letter = (char)c;
	str = (const char *)s;
	while (count < n && str[count])
	{
		if (str[count] == letter)
			return ((void *)&str[count]);
		count++;
	}
	return (NULL);
}
