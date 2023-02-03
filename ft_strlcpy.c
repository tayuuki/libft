/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayuuki <tayuuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 02:08:18 by tayuuki           #+#    #+#             */
/*   Updated: 2023/02/04 02:08:19 by tayuuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i + 1 < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int	main()
// {
// 	char dest1[9];
// 	char dest2[9];
// 	char src[12] = "hello world";
// 	printf("%s\n", dest1);
// 	printf("%zu\n", strlcpy(dest2, src, 3));
// 	printf("%s\n", dest1);
// 	printf("%s\n", dest2);
// 	printf("%zu\n", ft_strlcpy(dest1, src, 3));
// 	printf("%s\n", dest2);
// 	return (0);
// }