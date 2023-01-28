#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *d;
	unsigned int i;

	d = (char *)malloc(sizeof(char) * (len + 1));
	if (d == NULL)
		return (d);
	i = 0;
	while (i++ < len && s[start + i - 1] != '\0')
		d[start + i - 1] = s[start + i - 1];
	return (d);	
}