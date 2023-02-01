#include<stdio.h>
#include<string.h>
// #include "libft.h"

// char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t			i;
// 	unsigned char	*h;
// 	unsigned char	*n;
	
// 	if (strlen(needle) > strlen(haystack))
// 		return (NULL);
// 	if (needle == NULL)
// 		return ((char *)haystack);
// 	h = (unsigned char *)haystack;
// 	n = (unsigned char *)needle;
// 	while (len-- && *h != '\0')
// 	{
// 		i = 0;
// 		while (*(h + i) != '\0' && *(h + i) == *(n + i))
// 		{
// 			if (*(n + i + 1) == '\0')
// 				return ((char *)h);
// 			i++;
// 		}
// 		h++;
// 	}
// 	return (NULL);
// }

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if ((!len && (!haystack || !needle)) || !needle[0])
		return ((char*)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j] &&
				i + j < len && haystack[i + j] == needle[j])
			j++;
		if (!needle[j])
			return ((char*)(haystack + i));
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
	// printf("%s\n", ft_strnstr("42Paris and 42Tokyo and 42Tokushima", "42T", 30));
	// printf("%s\n", ft_strnstr("42Paris and 42Osaka and 42Hukushima", "42T", 30));
	// printf("%s\n", strnstr("42Paris and 42Tokyo and 42Tokushima", "\0", 30));
	// printf("%s\n", strnstr("42Paris and 42Osaka and 42Hukushima", "42T", 30));

// 	char *s1 = "abd";
// 	char *s2 = "a";
// 	size_t len = 0;
// 	printf("%s\n", ft_strnstr(s1, s2, len));
// 	printf("%s\n", strnstr(s1, s2, len));
// 	return (0);
// }