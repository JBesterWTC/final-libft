/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 08:17:37 by jbester           #+#    #+#             */
/*   Updated: 2016/07/21 08:27:55 by jbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Copies string s1 to a new string with sufficient memory allocated*/

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		i;

	if ((dest = (char *)malloc(ft_strlen(s1) + 1)) == NULL)
		return (NULL);;
	i = 0;
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
