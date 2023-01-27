#include<libc.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (*needle == '\0')
		return ((char *)haystack);
	while (len--)
	{
		i = 0;
		while (*(haystack + i) != '\0' && *(haystack + i) == *(needle + i))
		{
			if (*(needle + i + 1) == '\0')
				return ((char *)haystack);
			i++;
		}
		haystack++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strnstr("42Paris and 42Tokyo and 42Tokushima", "42T", 30));
// 	printf("%s\n", ft_strnstr("42Paris and 42Osaka and 42Hukushima", "42T", 30));
// 	printf("%s\n", strnstr("42Paris and 42Tokyo and 42Tokushima", "42T", 30));
// 	printf("%s\n", strnstr("42Paris and 42Osaka and 42Hukushima", "42T", 30));
// 	return (0);
// }
