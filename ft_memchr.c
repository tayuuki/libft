/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayuuki <tayuuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 01:55:48 by tayuuki           #+#    #+#             */
/*   Updated: 2023/02/04 02:22:38 by tayuuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_cpy;

	s_cpy = (unsigned char *)s;
	while (n--)
	{	
		if (*s_cpy == (unsigned char)c)
			return ((void *)s_cpy);
		s_cpy++;
	}
	return (NULL);
}
