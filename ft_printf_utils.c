/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 11:50:54 by arecce            #+#    #+#             */
/*   Updated: 2022/03/31 19:29:22 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_numlen(int nb)
{
	int	count;

	count = 0;
	if (nb <= 0)
		++count;
	while (nb && ++count)
		nb /= 10;
	return (count);
}

void	ft_convert(int nb, const char *digit)
{
	if (nb > 0)
	{
		ft_convert(nb / 10, digit);
		ft_putchar(digit[nb % 10]);
	}
}
