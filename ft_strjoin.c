/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayuuki <tayuuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 02:07:23 by tayuuki           #+#    #+#             */
/*   Updated: 2023/02/04 02:21:45 by tayuuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*d;

	if (!s1 || !s2)
		return (0);
	d = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!d)
		return (NULL);
	ft_strlcpy(d, s1, ft_strlen(s1) + 1);
	ft_strlcat(d, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (d);
}
