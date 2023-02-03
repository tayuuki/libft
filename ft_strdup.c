/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayuuki <tayuuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 02:00:11 by tayuuki           #+#    #+#             */
/*   Updated: 2023/02/04 02:00:26 by tayuuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s1[len] != '\0')
		len++;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (dest);
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char str[] = "Hello";
// 	printf("%s\n", ft_strdup(str));
// 	printf("%s\n", strdup(str));
// 	return (0);
// }