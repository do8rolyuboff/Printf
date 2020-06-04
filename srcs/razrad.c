#include "../include/ft_printf.h"

int	razrad(long long int m)
{
	int j;

	j = 0;
	while (m != 0)
	{
		j++;
		m = m / 10;
	}
	return (j);
}
