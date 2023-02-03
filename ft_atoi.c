/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayuuki <tayuuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 01:21:46 by tayuuki           #+#    #+#             */
/*   Updated: 2023/02/04 02:34:55 by tayuuki          ###   ########.fr       */
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

int	ft_atoi(const char *str)
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
