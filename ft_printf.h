/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:05:47 by akostian          #+#    #+#             */
/*   Updated: 2024/06/25 16:07:50 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include <stdlib.h>

void	ft_printf(const char *str, ...);

/* PUT */

void	ft_putchar(int c);
void	ft_puthex(unsigned long nbr, int is_upper);
void	ft_putll_nbr(long long nbr);
void	ft_putptr(void *ptr);
void	ft_putstr(char *s);

/* LIBFT */

char	*ft_strchr(const char *s, int c);
int		ft_toupper(int c);

#endif