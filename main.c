/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 09:59:04 by akostian          #+#    #+#             */
/*   Updated: 2024/04/29 15:01:04 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define HEX "0123456789abcdef"

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>

char	*ft_strchr(const char *s, int c)
{
	while (1)
	{
		if (*s == c)
			return ((char *)s);
		if (!*s)
			return (NULL);
		s++;
	}
}

int	ft_toupper(int c)
{
	return (c - (32 * (c >= 'a' && c <= 'z')));
}

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (*s++)
		length++;
	return (length);
}

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	write(1, s, ft_strlen(s));
}

void	ft_putll_nbr(long long nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		if (nbr == LLONG_MIN)
		{
			ft_putstr("9223372036854775807");
			return ;
		}
		nbr = -nbr;
	}
	if (nbr >= 10)
		ft_putll_nbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}

void	ft_putptr(void *ptr)
{
	unsigned long	address;
	char			buffer[16];
	int				i;

	i = 0;
	address = (unsigned long)ptr;
	while (address)
	{
		buffer[i++] = HEX[address % 16];
		address /= 16;
	}
	ft_putstr("0x");
	while (i-- >= 0)
		write(1, &buffer[i], 1);
}

void	ft_puthex(unsigned long nbr, int is_upper)
{
	char		buffer[9];
	short int	i;

	i = 0;
	while (nbr)
	{
		buffer[i++] = HEX[nbr % 16];
		nbr /= 16;
	}
	while (i-- > 0)
	{
		if (is_upper)
			ft_putchar(ft_toupper(buffer[i]));
		else
			ft_putchar(buffer[i]);
	}
}

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

int	main(void)
{
	const long long	a = 8129319238912;
	printf("1  2 3 \t\t\t  %i     AA!\n", a);
	ft_printf("1  2 3 \t\t\t  %i     AA!\n", a);
	printf("1  2 3 \t\t\t  %d     AA!\n", 546465);
	ft_printf("1  2 3 \t\t\t  %d     AA!\n", 546465);
	printf("1  2 3 \t\t\t  %u     AA!\n", a);
	ft_printf("1  2 3 \t\t\t  %u     AA!\n", a);
	printf("1  2 3 \t\t\t  %x     AA!\n", a);
	ft_printf("1  2 3 \t\t\t  %x     AA!\n", a);
	printf("1  2 3 \t\t\t  %X     AA!\n", a);
	ft_printf("1  2 3 \t\t\t  %X     AA!\n", a);
	printf("1  2 3 \t\t\t  %%     AA!\n", a);
	ft_printf("1  2 3 \t\t\t  %%     AA!\n", a);
	printf("1  2 3 \t\t\t  %c     AA!\n", '\120');
	ft_printf("1  2 3 \t\t\t  %c     AA!\n", '\120');
	printf("1  2 3 \t\t\t  %s     AA!\n", "123saf");
	ft_printf("1  2 3 \t\t\t  %s     AA!\n", "123saf");
	ft_printf("1  2 3 \t\t\t  %X     AA!\n", 0x0defb12);
	ft_printf("1  2 3 \t\t\t  %x     AA!\n", 0x0defb12);
	// printf("1  2 3 \t\t\t  %p     AA!\n",  &a);
	// ft_printf("1  2 3 \t\t\t  %p     AA!\n",  &a);
	// printf("wow% swow\n",  "-12312");
}
