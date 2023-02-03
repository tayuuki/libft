/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayuuki <tayuuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 01:53:57 by tayuuki           #+#    #+#             */
/*   Updated: 2023/02/04 02:27:49 by tayuuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	if (count != 0 && SIZE_MAX / count < size)
		return (NULL);
	str = (void *)malloc(count * size);
	if (!str)
		return (NULL);
	ft_bzero(str, size * count);
	return (str);
}
