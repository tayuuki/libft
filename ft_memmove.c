/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayuuki <tayuuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 01:56:58 by tayuuki           #+#    #+#             */
/*   Updated: 2023/02/04 01:56:59 by tayuuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d_cpy;
	const unsigned char	*s_cpy;

	if (!dst && !src)
		return (NULL);
	d_cpy = (unsigned char *)dst;
	s_cpy = (const unsigned char *)src;
	if (d_cpy < s_cpy)
		return (ft_memcpy(dst, src, len));
	else
		while (len--)
			d_cpy[len] = s_cpy[len];
	return (dst);
}

// int main(void)
// {
// 	char str1[] = "0123456789";
// 	char str2[] = "0123456789";
// 	char str3[] = "56789";
// 	ft_memmove(str1, str3, 5);
// 	memmove(str2, str3, 5);
// 	printf("%s\n%s\n",str1,str2);
// 	return 0;
// }