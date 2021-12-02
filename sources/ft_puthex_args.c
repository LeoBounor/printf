/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_args.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Leo <Leo@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:43:33 by Leo               #+#    #+#             */
/*   Updated: 2021/12/02 16:14:27 by Leo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_puthex_args(unsigned int n, int c)
{
	int				i;
	int				rest;
	unsigned long	new_n;
	char			base1[16];
	char			base2[16];

	i = 0;
	base1[16] = "0123456789abcdef";
	base2[16] = "0123456789ABCDEF";
	new_n = (unsigned long)n;
	while (new_n > 15)
	{
		rest = new_n % 16;
		if (c == 'x')
			i += ft_putchar_args(base1[rest]);
		else
			i += ft_putchar_args(base2[rest]);
		new_n /= 16;
	}
	if (c == 'x')
		i += ft_putchar_args(base1[new_n]);
	else
		i += ft_putchar_args(base2[new_n]);
	return (i);
}
