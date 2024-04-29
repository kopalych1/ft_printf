/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:23:20 by akostian          #+#    #+#             */
/*   Updated: 2024/04/29 15:24:50 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#define HEX "0123456789abcdef"

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
