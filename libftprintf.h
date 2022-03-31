/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:19:44 by arecce            #+#    #+#             */
/*   Updated: 2022/03/31 19:30:38 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_putchar(int c);
int		ft_conversions(va_list args, const char c);
int		ft_putstr(char *str);
int		t_printf(const char *str, ...);
int		ft_numlen(int nb);
void	ft_convert(int nb, const char *digit);
int		ft_putnbr(int nb);
int		ft_putunbr(unsigned int nb);
int		ft_puthex(unsigned int nb, const char c);

#endif
