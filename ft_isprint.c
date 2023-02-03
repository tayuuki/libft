/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayuuki <tayuuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 01:55:02 by tayuuki           #+#    #+#             */
/*   Updated: 2023/02/04 01:55:03 by tayuuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (32 <= c && c <= 126);
}

// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
// 	printf("%d", ft_isprint('\0'));
// 	printf("%d", ft_isprint(' '));
// 	printf("%d", isprint('\0'));
// 	printf("%d", isprint(' '));
// 	return (0);
// }