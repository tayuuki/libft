/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayuuki <tayuuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 02:11:01 by tayuuki           #+#    #+#             */
/*   Updated: 2023/02/04 02:11:02 by tayuuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 32);
	return (c);
}

// #include <ctype.h>
// #include <libc.h>
// int	main()
// {
// 	printf("%c\n", toupper('a'));
// 	printf("%c\n", toupper('A'));
// 	printf("%c\n", ft_toupper('a'));
// 	printf("%c", ft_toupper('A'));
// 	return (0);
// }