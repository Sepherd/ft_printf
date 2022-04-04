/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:31:42 by arecce            #+#    #+#             */
/*   Updated: 2022/04/04 19:06:14 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putunbr(unsigned int nb)
{
	const char	*digit;
	int			len_print;

	digit = "0123456789";
	len_print = ft_numlen(nb);
	// if (nb < 0)
	// 	len_print = 0;
	if (nb == 0)
		ft_putchar('0');
	else
		ft_convert(nb, digit);
	return (len_print);
}
