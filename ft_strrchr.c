/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 11:30:31 by jbester           #+#    #+#             */
/*   Updated: 2016/07/25 12:21:27 by jbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Finds the last occurence of c (cast to char) in string s*/

char	*ft_strrchr(const char *s, int c)
{
	char	a;
	char	*last;

	a = (char)c;
	last = NULL;
	while (*s)
	{
		if (*s == a)
			last = (char *)s;
		s++;
	}
	if (!last)
		return (NULL);
	return (last);
}
