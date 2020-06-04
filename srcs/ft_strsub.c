#include "../include/ft_printf.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new;

	i = 0;
	new = NULL;
	if (!s)
		return (NULL);
	if (!(new = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	ft_bzero(new, len + 1);
	while (s[start + i] != '\0')
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
