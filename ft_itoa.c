#include"libft.h"


char	*ft_strrev(char *tmp, int size, int minus)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, tmp, size+1);
	if (minus)
	{
		str[i] = '-';
		i++;
	}
	while (i < size)
	{
		str[i] = tmp[size - i - 1];
		i++;
	}
	str[i] = '\0';
	return (str);
}
char	*ft_itoa(int n)
{
	char	str[12];
	int		i;
	int		minus;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ft_bzero(str, 12);
	minus = 0;
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		minus = 1;
		n *= -1;
	}
	i = 0;
	while (n > 0)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
return (ft_strrev(str, ft_strlen(str)+minus, minus));
}

// int	main(void)
// {
// 	int n1 = -42;
// 	int n2 = 42;
// 	int n3 = -2147483648;
// 	int n4 = 2147483647;
// 	int n5 = 0;
// 	printf("%s\n", ft_itoa(n1));
// 	printf("%s\n", ft_itoa(n2));
// 	printf("%s\n", ft_itoa(n3));
// 	printf("%s\n", ft_itoa(n4));
// 	printf("%s\n", ft_itoa(n5));
	// ft_itoa(n1);
	// ft_itoa(n2);
	// ft_itoa(n3);
	// ft_itoa(n4);
	// ft_itoa(n5);
// 	return (0);
// }