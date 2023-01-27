#include<libc.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d_cpy;
	unsigned char	*s_cpy;

	d_cpy = (unsigned char *)dst;
	s_cpy = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n--)
		*d_cpy++ = *s_cpy++;
	return (dst);
}

// int main(void)
// {
//     char str1[] = "0123456789";
//     char str2[] = "0123456789";
//     char str3[] = "56789";
//     // ft_memcpy(str1, str3, 5);
//     // memcpy(str2, str3, 5);
//     // ft_memcpy(str4, str5, 5);
//     printf("%s\n", memcpy(NULL, str1, 5));
//     // printf("%s\n%s\n",str1,str2);

//     return 0;
// }
