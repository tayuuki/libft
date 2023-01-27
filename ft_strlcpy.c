#include<libc.h>
#include "libft.h"

size_t	ft_strlcpy(char *restrict dest, const char *restrict src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

// int	main()
// {
// 	char dest1[9];
// 	char dest2[9];
// 	char src[12] = "hello world";
// 	printf("%s\n", dest2);
// 	printf("%zu\n", strlcpy(dest2, src, 0));
// 	printf("%s\n", dest2);
// 	printf("%s\n", dest1);
// 	printf("%zu\n", ft_strlcpy(dest1, src, 0));
// 	printf("%s\n", dest1);
// 	return (0);
// }