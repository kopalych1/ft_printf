/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:19:29 by akostian          #+#    #+#             */
/*   Updated: 2024/04/29 15:21:35 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#define HEX "0123456789abcdef"

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
	write(1, &"0x", 2);
	while (i-- >= 0)
		write(1, &buffer[i], 1);
}
