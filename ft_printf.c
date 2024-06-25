/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:02:25 by akostian          #+#    #+#             */
/*   Updated: 2024/06/25 16:11:14 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	route(char flag, va_list args)
{
	if (flag == 'd' || flag == 'i')
		ft_putll_nbr((int)va_arg(args, int));
	else if (flag == 'u')
		ft_putll_nbr((unsigned int)va_arg(args, unsigned int));
	else if (flag == '%')
		ft_putchar('%');
	else if (flag == 'c')
		ft_putchar((unsigned char)va_arg(args, int));
	else if (flag == 'x' || flag == 'X')
		ft_puthex(va_arg(args, unsigned int), (flag == 'X'));
	else if (flag == 'p')
		ft_putptr(va_arg(args, void *));
	else if (flag == 's')
		ft_putstr(va_arg(args, char *));
}

void	ft_printf(const char *str, ...)
{
	va_list			args;

	va_start(args, str);
	while (*str)
	{
		if (*str == '%' && ft_strchr("cspdiuxX%", *(str + 1)))
		{
			route(*(str + 1), args);
			str += 2;
		}
		else
			ft_putchar(*str++);
	}
	va_end(args);
}
