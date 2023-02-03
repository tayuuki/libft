/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayuuki <tayuuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 01:54:32 by tayuuki           #+#    #+#             */
/*   Updated: 2023/02/04 01:54:33 by tayuuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	return ((47 < c && c < 58) || (64 < c && c < 91) || (96 < c && c < 123));
}

// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
// 	printf("%d", ft_isalnum('0'));
// 	printf("%d", ft_isalnum('-'));
// 	printf("%d\n", ft_isalnum('a'));
// 	printf("%d", isalnum('0'));
// 	printf("%d", isalnum('-'));
// 	printf("%d", isalnum('a'));
// 	return (0);
// }