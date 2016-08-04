/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 13:13:24 by jbester           #+#    #+#             */
/*   Updated: 2016/07/28 11:51:33 by jbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	a;
	size_t	size;

	i = 0;
	a = 0;
	size = ft_strlen(little);
	if (!size)
		return ((char *)big);
	while ((i < len) && (big[i] != '\0'))
	{
		while ((big[i+a] == little[a]) && (little[a] != '\0'))
		{
			if ((a + i) == len - 1)
				return ((char *)big + i);
			a++;
		}
		a = 0;
		i++;
	}
	return (NULL);
}
