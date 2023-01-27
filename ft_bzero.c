#include<libc.h>

void	ft_bzero(void *s, size_t n)
{
	char	*dest;
	int		count;

	dest = s;
	count = -1;
	while (n--)
		dest[++count] = '\0';
}

// int main()
// {
// 	char str[] = "12345";
// 	ft_bzero(str, 3);
// 	write(1, str, 5);
// 	printf("\n");
// 	char str1[] = "12345";
// 	bzero(str1, 3);
// 	write(1, str1, 5);
// 	return (0);
// }
