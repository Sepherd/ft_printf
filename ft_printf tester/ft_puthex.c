/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:48:09 by arecce            #+#    #+#             */
/*   Updated: 2022/04/01 18:09:53 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthex(unsigned int nb, const char c)
{
	const char	*digit_low;
	const char	*digit_up;
	int			len_print;

	digit_low = "0123456789abcdef";
	digit_up = "0123456789ABCDEF";
	len_print = ft_hex_len(nb);
	if (nb < 0)
		return (0);
	if (nb == 0)
		len_print += ft_putstr("00");
	else
	{
		if (nb < 16)
			ft_putchar('0');
		ft_hexconvert(nb, digit_low, digit_up, c);
	}
	return (len_print);
}
