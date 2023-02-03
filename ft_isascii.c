/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayuuki <tayuuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 01:54:50 by tayuuki           #+#    #+#             */
/*   Updated: 2023/02/04 01:54:51 by tayuuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}

// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
// 	printf("%d", ft_isascii('\0'));
// 	printf("%d", isascii('\0'));
// 	return (0);
// }