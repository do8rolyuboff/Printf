#include "../include/ft_printf.h"

char	*flag_null(char *s, int i)
{
	if (s[i] == '.')
		i--;
	s[i] += 1;
	return (s);
}
