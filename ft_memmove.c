#include<libc.h>
// #include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d_cpy;
	const unsigned char	*s_cpy;

	d_cpy = (unsigned char *)dst;
	s_cpy = (const unsigned char *)src;
	if (d_cpy == NULL && s_cpy == NULL)
		return (NULL);
	if (d_cpy > s_cpy)
		while (len--)
			d_cpy[len] = s_cpy[len];
	else
		while (len--)
			*d_cpy++ = *s_cpy++;
	return (dst);
}

// int main(void)
// {
// 	char str1[] = "0123456789";
// 	char str2[] = "0123456789";
// 	char str3[] = "56789";
// 	ft_memmove(str1, str3, 5);
// 	memmove(str2, str3, 5);
// 	printf("%s\n%s\n",str1,str2);
// 	return 0;
// }