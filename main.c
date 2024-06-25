/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 09:59:04 by akostian          #+#    #+#             */
/*   Updated: 2024/06/25 16:10:05 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>

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
