#include<libc.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;

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