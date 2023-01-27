#include<libc.h>

void	*ft_calloc(size_t count, size_t size)
{
	return ((void *)malloc(count * size));
}
