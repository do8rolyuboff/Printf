#include "../include/ft_printf.h"

int		ft_write(unsigned char str)
{
	write(1, &str, 1);
	return (1);
}
