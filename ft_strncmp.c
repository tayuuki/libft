#include<libc.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (str1[i] != '\0' && str2[i] != '\0' && i < n)
	{
		if (str1[i] > str2[i])
			return (1);
		else if (str1[i] < str2[i])
			return (-1);
		i++;
	}
	if (str1[i] != '\0' && i < n)
		return (1);
	else if (str2[i] != '\0' && i < n)
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