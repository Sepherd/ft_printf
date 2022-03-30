/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:48:09 by arecce            #+#    #+#             */
/*   Updated: 2022/03/30 18:21:26 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthex(unsigned int nb, const char c)
{
	char	*digit_low;
	char	*digit_up;
	int		len_print;
	int		i;

	digit_low = "0123456789abcdef";
	digit_up = "0123456789ABCDEF";
	len_print = 0;
	i = 0;
	if (nb < 0)
		return (0);
	if (nb == 0)
		len_print += ft_putstr("00");
	else if (nb >= 0)
	{
		if (c == 'x')
		{
			len_print += ft_putchar(digit_low[i] % 16);
			nb /= 16;
		}
		else if (c == 'X')
		{
			len_print += ft_putchar(digit_up[i] % 16);
			nb /= 16;
		}
	}
	return (len_print);
}
