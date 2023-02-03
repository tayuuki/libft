/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayuuki <tayuuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 01:55:57 by tayuuki           #+#    #+#             */
/*   Updated: 2023/02/04 02:14:31 by tayuuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_cpy;
	unsigned char	*s2_cpy;

	s1_cpy = (unsigned char *)s1;
	s2_cpy = (unsigned char *)s2;
	while (n--)
	{
		if (*s1_cpy != *s2_cpy)
			return (*s1_cpy - *s2_cpy);
		s1_cpy++;
		s2_cpy++;
	}
	return (0);
}

// int	main()
// {
// 	char str[] = "Hello";
// 	char str1[] = "Hello";
// 	char str2[] = "hello";
// 	char str3[] = "HELLO";
// 	char str4[] = "Hello1";
// 	printf("%d\n", ft_memcmp(str, str1, 3));
// 	printf("%d\n", ft_memcmp(str, str2, 3));
// 	printf("%d\n", ft_memcmp(str, str3, 5));
// 	printf("%d\n", ft_memcmp(str, str4, 2));
// 	printf("%d\n", memcmp(str, str1, 3));
// 	printf("%d\n", memcmp(str, str2, 3));
// 	printf("%d\n", memcmp(str, str3, 5));
// 	printf("%d\n", memcmp(str, str4, 2));

// 	return(0);
// }