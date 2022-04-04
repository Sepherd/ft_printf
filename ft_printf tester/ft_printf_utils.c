/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 11:50:54 by arecce            #+#    #+#             */
/*   Updated: 2022/04/04 19:35:12 by arecce           ###   ########.fr       */
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

int	ft_hex_len(unsigned int nb)
{
	int	count;

	count = 0;
	while (nb != 0)
	{
		count++;
		nb = nb / 16;
	}
	return (count);
}

int	ft_ptr_len(uintptr_t ptr)
{
	int	count;

	count = 0;
	while (ptr != 0)
	{
		count++;
		ptr = ptr / 16;
	}
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

void	ft_hexconvert(int nb, const char *d_low, const char *d_up, char c)
{
	if (nb != 0)
	{
		if (c == 'x')
		{
			ft_hexconvert(nb / 16, d_low, d_up, c);
			ft_putchar(d_low[nb % 16]);
		}
		if (c == 'X')
		{
			ft_hexconvert(nb / 16, d_low, d_up, c);
			ft_putchar(d_up[nb % 16]);
		}
	}
}
