/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayuuki <tayuuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 02:07:33 by tayuuki           #+#    #+#             */
/*   Updated: 2023/02/04 02:27:08 by tayuuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*d;
	char	*s;
	size_t	n;
	size_t	dlen;

	d = dst;
	s = (char *)src;
	n = size;
	while (n-- != 0 && *dst != '\0')
		dst++;
	dlen = dst - d;
	n = size - dlen;
	if (n-- == 0)
		return (dlen + ft_strlen(src));
	while (*src != '\0')
	{
		if (n != 0)
		{
			*dst++ = *src;
			n--;
		}
		src++;
	}
	*dst = '\0';
	return (dlen + (src - s));
}

// int	main()
// {
// 	char dest1[8] = "abcde";
// 	char dest2[8] = "abcde";
// 	char *src = "nyan !";
// 	printf("%s\n", dest2);
// 	// printf("%zu\n", strlcat((void *)0, src, 4));
// 	printf("%zu\n", strlcat(dest2, src, 7));
// 	printf("%s\n", dest2);
// 	printf("%s\n", dest1);
// 	// printf("%zu\n", ft_strlcat((void *)0, src, 4));
// 	printf("%zu\n", ft_strlcat(dest1, src, 7));
// 	printf("%s\n", dest1);
// 	// printf("%zu\n", strlen(dest1));
// 	return (0);
// }
