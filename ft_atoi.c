/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayuuki <tayuuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 01:21:46 by tayuuki           #+#    #+#             */
/*   Updated: 2023/02/04 01:21:47 by tayuuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	over_flow(const char *str, int minus)
{
	unsigned long	total;

	total = 0;
	while (*str == '0')
		str++;
	while ('0' <= *str && *str <= '9')
	{
		if (minus == 1 && total * 10 / 10 != total)
			return ((int)LONG_MAX);
		else if (minus == -1 && total * 10 / 10 != total)
			return ((int)LONG_MIN);
		total *= 10;
		total += *str - '0';
		str++;
		if (minus == 1 && total > LONG_MAX)
			return ((int)LONG_MAX);
		else if (minus == -1 && total - 1 > LONG_MAX)
			return ((int)LONG_MIN);
	}
	return ((int)(total * minus));
}

int	ft_atoi(char *str)
{
	int	minus;

	minus = 1;
	while (*str == 32 || (9 <= *str && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	return (over_flow(str, minus));
}

// #include <stdio.h>
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
// 	printf("=========str===========\n");
// 	printf("atoi : int型変数numの値は: %d\n", atoi(str));
// 	printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str));
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