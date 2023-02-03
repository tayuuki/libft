/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayuuki <tayuuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 02:10:55 by tayuuki           #+#    #+#             */
/*   Updated: 2023/02/04 02:10:56 by tayuuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 32);
	return (c);
}

// #include <ctype.h>
// #include <libc.h>
// int	main()
// {
// 	printf("%c\n", tolower('a'));
// 	printf("%c\n", tolower('A'));
// 	printf("%c\n", ft_tolower('a'));
// 	printf("%c", ft_tolower('A'));
// 	return (0);
// }