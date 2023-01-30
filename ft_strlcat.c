#include<libc.h>
#include "libft.h"

// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	n;
// 	size_t	dstlen;

// 	n = dstsize;
// 	dstlen = 0;
// 	while (n-- != 0 && dst[dstlen] != '\0')
// 		dstlen++;
// 	n = dstsize - dstlen;
// 	if (n-- == 0)
// 		return(dstlen + strlen(src));
// 	while (*src != '\0')
// 	{
// 		if (n != 0)
// 		{
// 			*dst++ = *src;
// 			n--;
// 		}
// 		src++;
// 	}
// 	*dst = '\0';
// 	return(dstlen + (strlen(src)));	/* count does not include NUL */
// }

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const char *odst = dst;
	const char *osrc = src;
	size_t n = size;
	size_t dlen;

	/* Find the end of dst and adjust bytes left but don't go past end. */
	while (n-- != 0 && *dst != '\0')
		dst++;
	dlen = dst - odst;
	n = size - dlen;

	if (n-- == 0)
		return(dlen + ft_strlen(src));
	while (*src != '\0') {
		if (n != 0) {
			*dst++ = *src;
			n--;
		}
		src++;
	}
	*dst = '\0';

	return(dlen + (src - osrc));
}

// int	main()
// {
// 	char dest1[8] = "abcde";
// 	char dest2[8] = "abcde";
// 	char *src = "nyan !";
// 	printf("%s\n", dest2);
// 	// printf("%zu\n", strlcat((void *)0, src, 4));
// 	printf("%zu\n", strlcat(dest2, src, 7));
// 	printf("%s\n", dest2);
// 	printf("%s\n", dest1);
// 	// printf("%zu\n", ft_strlcat((void *)0, src, 4));
// 	printf("%zu\n", ft_strlcat(dest1, src, 7));
// 	printf("%s\n", dest1);
// 	// printf("%zu\n", strlen(dest1));
// 	return (0);
// }
