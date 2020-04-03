/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calpha <calpha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 19:36:49 by calpha            #+#    #+#             */
/*   Updated: 2020/01/30 15:57:58 by calpha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char			*print_null(void)
{
	int				i;
	char			*s;

	i = 2;
	if (!(s = ft_strnew(22)))
		return (NULL);
	s[0] = '0';
	s[1] = '.';
	while (i < 22)
	{
		s[i] = '0';
		i++;
	}
	return (s);
}

char				*f_no_zero(int sign, long long int n, double num)
{
	int				razrad_int;
	char			*tmp;
	char			*tmp_1;
	char			*tmp_2;
	char			*s;

	razrad_int = 0;
	tmp = ft_itoa_c(n, &razrad_int);
	tmp_1 = ft_strjoin(tmp, ".");
	tmp_2 = ft_itoa_frac(num, razrad_int);
	s = ft_strjoin(tmp_1, tmp_2);
	free(tmp_1);
	free(tmp_2);
	if (sign == -1)
	{
		tmp = s;
		s = ft_strjoin("-", tmp);
		free(tmp);
	}
	free(tmp);
	return (s);
}

char				*double_number(long double num)
{
	long long		n;
	int				i;
	int				sign;
	int				predel;

	n = num;
	i = 0;
	predel = 18 - razrad(n);
	while (predel-- && predel >= 0)
	{
		num *= 10;
		if ((int)num == 0)
			i++;
	}
	sign = num < 0 ? -1 : 1;
	if (num == 0)
		return (print_null());
	return (i == 0 ? f_no_zero(sign, n, num)
			: f_with_zero(sign, n, num, i));
}
