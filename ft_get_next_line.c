/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 12:02:38 by jbester           #+#    #+#             */
/*   Updated: 2016/08/04 09:52:07 by jbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_get_next_line.h"

char	*buffer(int const fd, char *string, int *rd_byte)
{
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * BUFF_SIZE);
	*rd_byte = read(fd, tmp, BUFF_SIZE);
	tmp[*rd_byte] = '\0';
	string = ft_strjoin(string, tmp);
	string = ft_strjoin(string, "\0");
	return (string);
}

int		ft_get_next_line(int const fd, char **line)
{
	static char		*buf = "";
	int				ret;
	char			*str;

	if (line <= 0 || fd < 0)
		return (-1);
	ret = 1;
	if (buf[0] == '\0')
		buf = ft_strnew(0);
	while (ret > 0)
	{
		if ((str = ft_strchr(buf, '\n')) != 0)
		{
			*str = '\0';
			*line = ft_strdup(buf);
			ft_memmove(buf, str + 1, ft_strlen(str + 1) + 1);
			return (1);
		}
		else
			*line = ft_strdup(buf);
		buf = buffer(fd, buf, &ret);
	}
	return (ret);
}
