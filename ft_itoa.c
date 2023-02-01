// #include"libft.h"

// char	*ft_strrev(char *str, int size, int minus)
// {
// 	int		i;
// 	char	*tmp;

// 	i = 0;
// 	ft_strlcpy(tmp, str, size);
// 	printf("\n%s\n", str);
// 	if (!minus)
// 		str[i++] = '-';
// 	while (!tmp[i])
// 	{
// 		str[i] = tmp[size - i - 1];
// 		i++;
// 	}
// 	return (str);
// }

// char	*ft_itoa(int n)
// {
// 	char	*str;
// 	char	*str_tmp;
// 	int		minus;

// 	if (n == -2147483648)
// 		return (ft_strdup("-2147483648"));
// 	str = (char *)malloc(sizeof(char) * 12);
// 	if (!str)
// 		return (NULL);
// 	ft_bzero(str, 12);
// 	str_tmp = str;
// 	minus = 1;
// 	if (n == 0)
// 		str[0] = '0';
// 	if (n < 0)
// 	{
// 		minus = 0;
// 		n *= -1;
// 	}
// 	while (n > 0)
// 	{
// 		printf("\n%s\n", str-1);
// 		*str = (n % 10) + '0';
// 		n /= 10;
// 		str++;
// 	}
// 	// printf("\n%s\n", str_tmp);
// return (ft_strrev(str_tmp, ft_strlen(str_tmp), minus));
// }

// int	main(void)
// {
// 	int n1 = -42;
// 	int n2 = 42;
// 	int n3 = -2147483648;
// 	int n4 = 2147483647;
// 	int n5 = 0;
// 	printf("あ%s\n", ft_itoa(n1));
// 	printf("あ%s\n", ft_itoa(n2));
// 	printf("あ%s\n", ft_itoa(n3));
// 	printf("あ%s\n", ft_itoa(n4));
// 	printf("あ%s\n", ft_itoa(n5));
// 	return (0);
// }