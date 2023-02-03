/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayuuki <tayuuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 02:10:24 by tayuuki           #+#    #+#             */
/*   Updated: 2023/02/04 02:26:39 by tayuuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strcheck(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	start = 0;
	while (s1[start] && strcheck(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && strcheck(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], end - start + 1);
	return (str);
}

// int main()
// {
// 	char *str = "abcba00abc11abcba";
// 	char *set = "abc";
// 	printf("%s", ft_strtrim(str, set));
// 	return (0);
// }