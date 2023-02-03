/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayuuki <tayuuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 02:09:42 by tayuuki           #+#    #+#             */
/*   Updated: 2023/02/04 02:09:43 by tayuuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	tmp;

	tmp = -1;
	i = -1;
	while (s[++i] != '\0')
		if (s[i] == (char)c)
			tmp = i;
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	if (tmp >= 0)
		return ((char *)&s[tmp]);
	return (NULL);
}

// int	main()
// {
// 	printf("%s\n", strrchr("1234537", '3'));
// 	printf("%s", strrchr("1234537", '\0'));
// 	printf("%s\n", ft_strrchr("1234537", '3'));
// 	printf("%s", ft_strrchr("1234537", '\0'));
// 	return (0);
// }