#include "../include/ft_printf.h"

int			ft_init_procent(char *str, int i, va_list args, t_flag *flags)
{
	int		len;

	len = 0;
	if (ft_strchr(str, 'f') != 0)
		flags->precision = 100;
	len += ft_analazer_flags(str, i, flags, args);
	return (len);
}
