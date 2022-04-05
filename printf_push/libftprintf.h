/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:19:44 by arecce            #+#    #+#             */
/*   Updated: 2022/04/05 11:48:32 by arecce           ###   ########.fr       */
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
int		ft_printf(const char *str, ...);
int		ft_numlen(long long nb);
void	ft_convert(int nb, const char *digit);
int		ft_putnbr(int nb);
void	ft_unconvert(unsigned int nb);
int		ft_putunbr(unsigned int nb);
void	ft_hexconvert(unsigned int nb, const char c);
int		ft_hex_len(long long nb);
int		ft_puthex(unsigned int nb, const char c);
void	ft_ptrconvert(uintptr_t ptr, char *digit);
int		ft_ptr_len(uintptr_t ptr);
int		ft_putptr(unsigned long long ptr);

#endif
