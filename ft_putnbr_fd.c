/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayuuki <tayuuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 01:57:42 by tayuuki           #+#    #+#             */
/*   Updated: 2023/02/04 02:37:43 by tayuuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
