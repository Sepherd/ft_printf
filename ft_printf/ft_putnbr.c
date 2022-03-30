/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:38:01 by arecce            #+#    #+#             */
/*   Updated: 2022/03/30 18:22:15 by arecce           ###   ########.fr       */
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

int	ft_isnegative(int nb, char *num)
{
	if (nb < 0)
	{
		num[0] = '-';
		if (nb == -2147483648)
		{
			num[1] = '2';
			nb = -147483648;
		}
		nb *= -1;
	}
	return (nb);
}

char	*ft_fillnum(char *num, const char *digit, int i, int nb)
{
	if (nb == 0)
		num[--i] = '0';
	else
	{
		while (nb > 0)
		{
		num[--i] = digit[nb % 10];
		nb /= 10;
		}
	}
	return (num);
}

int	ft_putnbr(int nb)
{
	const char	*digit;
	char		*num;
	int			i;
	int			len_print;

	digit = "0123456789";
	i = ft_numlen(nb);
	num = (char *)malloc(i + 1);
	if (!num)
		return (0);
	num[i] = '\0';
	nb = ft_isnegative(nb, num);
	num = ft_fillnum(num, digit, i, nb);
	len_print += ft_putstr(num);
	return (len_print);
}
