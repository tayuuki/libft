#include<stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// int	main()
// {
// 	const char str[] = "Hello World!";
// 	printf("%zu\n", ft_strlen(str));
// 	return (0);
// }
