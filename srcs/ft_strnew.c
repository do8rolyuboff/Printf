#include "../include/ft_printf.h"

char		*ft_strnew(size_t size)
{
	char	*tmp;

	if (!(tmp = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	ft_bzero(tmp, size + 1);
	return (tmp);
}
