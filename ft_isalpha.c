/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayuuki <tayuuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 00:44:24 by tayuuki           #+#    #+#             */
/*   Updated: 2023/02/04 00:44:54 by tayuuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((65 <= c && c <= 90) || (97 <= c && c <= 122));
}

// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
// 	printf("%d", ft_isalpha('a'));
// 	printf("%d\n", ft_isalpha('A'));
// 	printf("%d", isalpha('a'));
// 	printf("%d", isalpha('A'));
// 	return (0);
// }