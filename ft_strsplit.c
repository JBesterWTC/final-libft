/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 14:46:01 by jbester           #+#    #+#             */
/*   Updated: 2016/08/04 10:22:22 by jbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(const char *str, char c)
{
	int	word;
	int	i;

	word = 0;
	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c)
			word++;
		i++;
	}
	if (str[0] != '\0')
		word++;
	return (word);
}

static char	*ft_word_cpy(const char *str, char c, int *i)
{
	int		k;
	char	*s;

	if (!(s = (char *)malloc(sizeof(char) * (ft_strlen(str)))))
		return (NULL);
	k  = 0;
	while (str[*i] != c && str[*i])
	{
		s[k] = str[*i];
		k++;
		*i += 1;
	}
	s[k] = '\0';
	while (str[*i] == c && str[*i])
		*i += 1;
	return (s);
}

char		**ft_strsplit(const char *str, char c)
{
	int		l;
	int		i;
	int		wrd;
	char	**new;

	l = 0;
	i = 0;
	wrd = ft_word_count(str, c);
	if (!(new = (char **)malloc(sizeof(new) * (wrd + 2))))
		return (NULL);
	while (str[l] == c && str[l])
		l++;
	while (i < wrd && str[l])
	{
		new[i] = ft_word_cpy(str, c, &l);
		i++;
	}
	new[i] = NULL;
	return (new);
}
