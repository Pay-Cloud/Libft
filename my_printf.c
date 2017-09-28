/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeziyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 03:50:12 by mmeziyan          #+#    #+#             */
/*   Updated: 2017/02/15 21:28:55 by mmeziyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		my_printf(const char *str, ...)
{
	va_list ap;

	va_start(ap, str);
	while (*str)
	{
		if (*str != '%')
			write(1, str, 1);
		if (*str == '%')
		{
			if (*++str == 's')
				ft_putstr(va_arg(ap, char *));
			if (*str == 'c')
				ft_putchar((char)va_arg(ap, int));
			if (*str == 'd')
				ft_putnbr(va_arg(ap, int));
		}
		str++;
	}
}
