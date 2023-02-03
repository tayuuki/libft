/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayuuki <tayuuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 01:54:57 by tayuuki           #+#    #+#             */
/*   Updated: 2023/02/04 01:54:58 by tayuuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (48 <= c && c <= 57);
}

// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
// 	printf("%d", ft_isdigit('0'));
// 	printf("%d", ft_isdigit('a'));
// 	printf("%d", isdigit('0'));
// 	printf("%d", isdigit('a'));
// 	return (0);
// }