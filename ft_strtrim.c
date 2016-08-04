#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		max;
	char	*new;
	int		c;


	i = 0;
	c = 0;
	max = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[max] == ' ' || s[max] == '\n' || s[max] == '\t')
		max--;
	new = (char *)malloc(sizeof(char) * (max - i));
	if (new == NULL)
		return (NULL);
	while (i <= max)
	{
		new[c] = s[i];
		i++;
		c++;
	}
	return (new);
}
