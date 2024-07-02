/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:05:15 by akostian          #+#    #+#             */
/*   Updated: 2024/07/02 11:57:09 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	length;

	if (!s)
		return (ft_putstr("(null)"));
	length = 0;
	while (*s)
	{
		write(1, s++, 1);
		length++;
	}
	return (length);
}
