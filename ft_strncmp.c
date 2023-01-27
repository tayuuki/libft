#include<libc.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	if (s1[i] != '\0' && i < n)
		return (1);
	else if (s2[i] != '\0' && i < n)
		return (-1);
	return (0);
}

// int	main()
// {
// 	char str[] = "Hello";
// 	char str1[] = "Hello";
// 	char str2[] = "hello";
// 	char str3[] = "HELLO";
// 	char str4[] = "Hello1";
// 	printf("%d\n", ft_strncmp(str, str1, 3)); // 0
// 	printf("%d\n", ft_strncmp(str, str2, 3)); // -1
// 	printf("%d\n", ft_strncmp(str, str3, 5)); // 1
// 	printf("%d\n", ft_strncmp(str, str4, 2)); // 0
// 	return(0);
// }