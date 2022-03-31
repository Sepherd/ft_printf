/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:27:29 by arecce            #+#    #+#             */
/*   Updated: 2022/03/31 19:18:35 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(char *str)
{
	int	i;
	int	len_print;

	i = 0;
	len_print = 0;
	while (str[i])
	{
		len_print += ft_putchar(str[i]);
		i++;
	}
	return (len_print);
}
