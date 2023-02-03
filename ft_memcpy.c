/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayuuki <tayuuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 01:56:15 by tayuuki           #+#    #+#             */
/*   Updated: 2023/02/04 02:37:02 by tayuuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d_cpy;
	unsigned char	*s_cpy;

	d_cpy = (unsigned char *)dst;
	s_cpy = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	while (n--)
		*d_cpy++ = *s_cpy++;
	return (dst);
}
