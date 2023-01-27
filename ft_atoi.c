#include <stdio.h>
#include<limits.h>


// int	over_flow(const char *str, int minus)
// {
// 	int		total;
// 	long	tmp;

// 	total = 0;
// 	tmp = 0;
// 	while ('0' <= *str && *str <= '9')
// 	{
// 		tmp = total * 10;
// 		if ((minus * (tmp + (int)(*str - 48))) / (minus * (total + (int)(*str - 48))) != 10 && total != 0)
// 		{
// 			if (total >= 0)
// 				return ((int)LONG_MAX);
// 			else
// 				return ((int)LONG_MIN);
// 		}
// 		total = minus * tmp + (int)(*str - '0');
// 		str++;
// 	}
// 	return ((int)total);
// }

// int	ft_atoi(const char *str)
// {
// 	int		minus;
// 	long	tmp;

// 	minus = 1;
// 	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v'
// 			|| *str == '\f' || *str == '\r')
// 		str++;
// 	if (*str == '-')
// 		minus *= -1;
// 	while (*str == '+' || *str == '-')
// 		str++;
// 	return (over_flow(str, minus));
// }

// #include <stdlib.h>
// int main(void)
// {
// 	char *str = "\t\v\f\r\n \f-000000060\f50";
// 	char *str2 = "-085";
// 	char *str3 = "\t\v\f\r\n \f-\f\t\n\r     06050";
// 	char *str4 = "99999999999999999999999999";
// 	char *str5 = "-999999999999999999999999";
// 	char *str6 = "9223372036854775807";
// 	char *str7 = "-9223372036854775808";
// 	char *str8 = "9223372036854775808";
// 	char *str9 = "-9223372036854775809";
// 	char *str10 = "9223372036854775801";
// 	char *str11 = "-9223372036854775807";
// 	char *str12 = "2147483647";
// 	char *str13 = "-2147483648";
// 	// printf("=========str===========\n");
// 	// printf("atoi : int型変数numの値は: %d\n", atoi(str));
// 	// printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str));
// 	printf("=========str2===========\n");
// 	printf("atoi : int型変数numの値は: %d\n", atoi(str2));
// 	printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str2));
// 	printf("=========str3===========\n");
// 	printf("atoi : int型変数numの値は: %d\n", atoi(str3));
// 	printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str3));
// 	printf("=========str4===========\n");
// 	printf("atoi : int型変数numの値は: %d\n", atoi(str4));
// 	printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str4));
// 	printf("=========str5===========\n");
// 	printf("atoi : int型変数numの値は: %d\n", atoi(str5));
// 	printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str5));
// 	printf("=========!str6===========\n");
// 	printf("atoi : int型変数numの値は: %d\n", atoi(str6));
// 	printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str6));
// 	printf("=========!str7===========\n");
// 	printf("atoi : int型変数numの値は: %d\n", atoi(str7));
// 	printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str7));
// 	printf("=========!str8===========\n");
// 	printf("atoi : int型変数numの値は: %d\n", atoi(str8));
// 	printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str8));
// 	printf("=========!str9===========\n");
// 	printf("atoi : int型変数numの値は: %d\n", atoi(str9));
// 	printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str9));
// 	printf("=========!str10===========\n");
// 	printf("atoi : int型変数numの値は: %d\n", atoi(str10));
// 	printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str10));
// 	printf("=========!str11===========\n");
// 	printf("atoi : int型変数numの値は: %d\n", atoi(str11));
// 	printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str11));
// 	printf("=========!str12===========\n");
// 	printf("atoi : int型変数numの値は: %d\n", atoi(str12));
// 	printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str12));
// 	printf("=========!str13===========\n");
// 	printf("atoi : int型変数numの値は: %d\n", atoi(str13));
// 	printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str13));

// 	return (0);
// }