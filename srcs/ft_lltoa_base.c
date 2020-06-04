#include "../include/ft_printf.h"

int			ft_abs(int i)
{
	return ((i < 0) ? i * -1 : i);
}

size_t		ft_countdigit(unsigned long long n, int base, size_t count)
{
	return (n > 0) ? ft_countdigit(n / base, base, count + 1) : count;
}

char		*ft_lltoa_base(unsigned long long n, int base)
{
	size_t	digit;
	char	*str;

	digit = (n) ? ft_countdigit(n, base, 0) : 1;
	if (!(str = (char *)malloc(sizeof(char) * (digit + 1))))
		return (NULL);
	str[digit] = '\0';
	while (digit--)
	{
		str[digit] = ft_abs(n % base) + (n % base > 9 ? 'A' - 10 : '0');
		n /= base;
	}
	return (str);
}
