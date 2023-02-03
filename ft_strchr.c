/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayuuki <tayuuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 02:00:03 by tayuuki           #+#    #+#             */
/*   Updated: 2023/02/04 02:00:19 by tayuuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (s[++i] != '\0')
		if (s[i] == (char)c)
			return ((char *)&s[i]);
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}

// int	main()
// {
// 	printf("%s\n", strchr("123453", '3'));
// 	printf("%s\n", strchr("123453", '6'));
// 	printf("%s\n", ft_strchr("123453", '3'));
// 	printf("%s", ft_strchr("123453", '6'));
// 	return (0);
// }