#include"libft.h"


void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	if (count != 0 && SIZE_MAX / count < size)
		return (NULL);
	str = (void *)malloc(count * size);
	if (!str)
		return (NULL);
	ft_bzero(str, size * count);
	return (str);
}


