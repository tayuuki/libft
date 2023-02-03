#include <libc.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_cpy;

	s_cpy = (unsigned char *)s;
	while (n--)
	{	
		if (*s_cpy == (unsigned char)c)
			return ((void *)s_cpy);
		s_cpy++;
	}
	return (NULL);
}

// int	main()
// {
// 	char str1[] = "/|\x12\xff\x09\x42\2002\42|\\";
// 	char str2[] = "/|\x12\xff\x09\x42\2002\42|\\";
// 	printf("%s", (char *)ft_memchr(str1, '4', 1));
// 	printf("%s\n", (char *)ft_memchr(str1, '\200', 10));
// 	printf("%s", (char *)memchr(str2, '4', 1));
// 	printf("%s\n", (char *)memchr(str2, '\200', 10));
// 	return (0);
// }

