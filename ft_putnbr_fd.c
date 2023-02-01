#include "libft.h"

// void ft_putnbr_fd(int n, int fd)
// {
// 	char str[11];
// 	int i;

// 	// printf("\n%d\n", n);
// 	if (n == -2147483648)
// 	{
// 		ft_putstr_fd("-2147483648", fd);
// 		return ;
// 	}
// 	ft_bzero(str, 11);
// 	if (n == 0)
// 		str[0] = '0';
// 	if (n < 0)
// 	{
// 		ft_putchar_fd('-', fd);
// 		n *= -1;
// 	}
// 	i = 0;
// 	while (n)
// 	{
// 		str[i] = (n % 10) + '0';
// 		n /= 10;
// 		i++;
// 	}
// 	while (i >= 0)
// 		ft_putchar_fd(str[i--], fd);
// }

void	ft_putnbr_fd(int n, int fd)
{
	char	list[11];
	int		i;

	i = 10;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	else if (n < 0)
	{
		n = -n;
		write(fd, "-", 1);
	}
	else if (n == 0)
		write(fd, "0", 1);
	while (n > 0)
	{
		list[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	write(fd, &list[i + 1], 10 - i);
}

// int main()
// {
// 	ft_putnbr_fd(0, 2);
// 	ft_putnbr_fd(10, 2);
// 	ft_putnbr_fd(2147483647, 2);
// 	ft_putnbr_fd(-2147483648, 2);
// 	ft_putnbr_fd(-42, 2);
// 	return (0);
// }
