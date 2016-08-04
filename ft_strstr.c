/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 11:33:05 by jbester           #+#    #+#             */
/*   Updated: 2016/07/21 13:19:33 by jbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int	se;
	int	i;
	int	len;
	
	se = 0;
	i = 0;
	len = ft_strlen(little);
	if (!len)
		return ((char *)big);
	while (big[i] != '\0')
	{
	
		while ((big[i + se] == little[se]) && little[se] != '\0')
		{
			if (se == len - 1)
				return ((char *)big + i);
			se++;
		}
		se = 0;
		i++;
	}
	return (NULL);
}
