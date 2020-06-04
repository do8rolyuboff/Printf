#include "../include/ft_printf.h"

char	*ft_itoa_c(long long int n, int *a)
{
	int				i;
	long long int	r;
	char			*s;

	i = razrad(n);
	*a = i;
	if (i == 0)
	{
		if (!(s = ft_strnew(1)))
			return (NULL);
	}
	else
	{
		if (!(s = ft_strnew(i)))
			return (NULL);
	}
	if (n == 0)
		s[0] = '0';
	while (n != 0)
	{
		r = n < 0 ? -(n % 10) : n % 10;
		s[--i] = r + '0';
		n = n / 10;
	}
	return (s);
}
