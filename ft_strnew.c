/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calpha <calpha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 20:46:06 by calpha            #+#    #+#             */
/*   Updated: 2020/01/27 15:51:08 by ogeonosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*ft_strnew(size_t size)
{
	char	*tmp;

	if (!(tmp = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	ft_bzero(tmp, size + 1);
	return (tmp);
}
