/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayuuki <tayuuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 01:58:48 by tayuuki           #+#    #+#             */
/*   Updated: 2023/02/04 02:37:31 by tayuuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0' && *s != c)
			count++;
		while (*s != '\0' && *s != c)
			s++;
	}
	return (count);
}

size_t	count_len(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**d;
	int		i;
	size_t	len;

	if (!s)
		return (NULL);
	d = (char **)malloc(sizeof(s) * (count(s, c) + 1));
	if (!d)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		len = count_len(s, c);
		if (*(s + len - 1) != c)
			d[i++] = ft_substr(s, 0, len);
		s += len;
	}
	d[i] = 0;
	return (d);
}
