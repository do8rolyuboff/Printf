#include "../include/ft_printf.h"

int			ft_printf_c(va_list args, t_flag *flags)
{
	int		len;
	char	str;

	len = 0;
	str = va_arg(args, int);
	if (!flags->minus)
	{
		while (len < flags->width - 1)
			len += ft_write(' ');
		len += ft_write(str);
	}
	else
	{
		len += ft_write(str);
		while (len < flags->width)
			len += ft_write(' ');
	}
	return (len);
}
