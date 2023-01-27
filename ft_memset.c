#include <libc.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*buf;
	size_t	i;

	buf = (unsigned char *)b;
	i = -1;
	while (++i < len)
	{
		*buf = c;
		buf++;
	}
	return (b);
}

// int main(void)
// {
// 	char str[] = "0123456789";
// 	char str1[] = "0123456789";
// 	ft_memset(str+2, '*', 5);
// 	memset(str1+2, '*', 5);
// 	printf("%s\n%s",str,str1);
// 	return 0;
// }