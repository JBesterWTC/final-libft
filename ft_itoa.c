/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 11:52:39 by jbester           #+#    #+#             */
/*   Updated: 2016/08/04 09:25:40 by jbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int nbr)
{
	char	*str;

	if (nbr == -2147483648)
		return (ft_strdup("-2147483648"));
	if (nbr < 0)
		return (ft_strjoin("-", ft_itoa(-nbr)));
	if (!(str = ft_strdup("0")))
		return (NULL);
	*str += nbr % 10;
	if (nbr >= 0 && nbr <= 9)
		return (ft_strdup(str));
	else
		return (ft_strjoin(ft_itoa(nbr / 10), str));
	return (0);
}
