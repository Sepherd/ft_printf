#include <unistd.h>
#include <stdio.h>

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

int	ft_putunbr(unsigned int nb)
{
	int			len_print;
    int         print;

	len_print = ft_numlen(nb);
    print = 0;
	if (nb == 0)
		//ft_putchar('0');
        write(1, '0', 1);
	else
		while (nb != 0)
        {
            print = nb % 10 + 48;
            write(1, &print, 1);
            nb /= 10;
        }
	return (len_print);
}

int main()
{
    printf("%d\n", ft_putunbr(-1);
}