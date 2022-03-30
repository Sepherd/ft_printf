/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:31:42 by arecce            #+#    #+#             */
/*   Updated: 2022/03/30 18:17:32 by arecce           ###   ########.fr       */
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

char	ft_fillnum(char *num, const char *digit, int i, int nb)
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

int	ft_putunbr(unsigned int nb)
{
	const char	*digit;
	char		*num;
	int			i;
	int			len_print;

	if (nb < 0)
		return (0);
	digit = "0123456789";
	i = ft_numlen(nb);
	num = (char *)malloc(i + 1);
	if (!num)
		return (0);
	num[i] = '\0';
	num = ft_fillnum(num, digit, i, nb);
	len_print += ft_putstr(num);
	return (len_print);
}
