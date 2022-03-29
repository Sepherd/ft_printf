#include <stdarg.h>
#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_conversions(va_list args, const char c)
{
	int	len_print;

	len_print = 0;
	if (c == 'c')
		len_print += ft_putcha(va_arg(args, char));
	else if (c == 's')
		len_print += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		len_print += ft_putstr(va_arg(args, ???));
	else if (c == 'd' || c == 'i')
		len_print += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		len_print += ft_putstr(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		len_print += ft_puthex(va_arg(args, char));
	else if (c == '%')
		len_print += ft_putchar('%');
	return (len_print);
}

int ft_printf(const char *str, ...)
{
	int		i;
	int		len_print;
	va_list	args;

	i = 0;
	len_print = 0;
	va_start(args, str);
	while(str[i])
	{
		if (str[i] == '%')
		{
			fun;			
			i++;
		}
		else
			len_print += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len_print);
}