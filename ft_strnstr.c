#include<stdio.h>
#include<string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	unsigned char	*h;
	unsigned char	*n;
	
	if (strlen(needle) > strlen(haystack))
		return (NULL);
	if (needle == NULL)
		return ((char *)haystack);
	h = (unsigned char *)haystack;
	n = (unsigned char *)needle;
	while (len-- && *h != '\0')
	{
		i = 0;
		while (*(h + i) != '\0' && *(h + i) == *(n + i))
		{
			if (*(n + i + 1) == '\0')
				return ((char *)h);
			i++;
		}
		h++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	// printf("%s\n", ft_strnstr("42Paris and 42Tokyo and 42Tokushima", "42T", 30));
// 	// printf("%s\n", ft_strnstr("42Paris and 42Osaka and 42Hukushima", "42T", 30));
// 	// printf("%s\n", strnstr("42Paris and 42Tokyo and 42Tokushima", "42T", 30));
// 	// printf("%s\n", strnstr("42Paris and 42Osaka and 42Hukushima", "42T", 30));

// 	char *s1 = "FF";
// 	char *s2 = "see F your F return F now F";
// 	printf("%s\n", ft_strnstr(s1, s2, strlen(s2)));
// 	printf("%s\n", strnstr(s1, s2, strlen(s2)));
// 	return (0);
// }
