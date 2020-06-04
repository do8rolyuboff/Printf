#include "../include/ft_printf.h"

int			check_num(char i)
{
	if (i > '0' && i <= '9')
		return (1);
	else
		return (0);
}

size_t		ft_atoi(const char *s)
{
	int		sign;
	int		res;
	int		i;

	res = 0;
	i = 0;
	while (check_num(s[i]) != 1)
		i++;
	while ((s[i] > 8 && s[i] < 20) || s[i] == ' ')
		i++;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != '\0')
		res = res * 10 + (s[i++] - '0');
	return (res * sign);
}

size_t		ft_atoi_pres(const char *s, int i)
{
	int		sign;
	int		res;

	res = 0;
	while (check_num(s[i]) != 1)
		i++;
	while ((s[i] > 8 && s[i] < 20) || s[i] == ' ')
		i++;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != '\0')
		res = res * 10 + (s[i++] - '0');
	return (res * sign);
}
