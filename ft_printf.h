/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:05:47 by akostian          #+#    #+#             */
/*   Updated: 2024/07/02 11:45:52 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);

/* PUT */

int		ft_putchar(int c);
int		ft_puthex(unsigned long nbr, int is_upper);
int		ft_putll_nbr(long long nbr);
int		ft_putptr(void *ptr);
int		ft_putstr(char *s);

/* LIBFT */

char	*ft_strchr(const char *s, int c);
int		ft_toupper(int c);

#endif