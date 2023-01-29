#include "libft.h"
#include<libc.h>

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s1[len] != '\0')
		len++;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (dest);
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*d;
	unsigned int	i;

	if ((int)ft_strlen(s) < start)
		return (ft_strdup(""));
	d = (char *)malloc(sizeof(char) * (len + 1));
	if (d == NULL || s == NULL)
		return (NULL);
	i = 0;
	while (len-- && s[start + i] != '\0') {
		d[start + i] = s[start + i];
		i++;
	}
	while (len--) {
		d[start + i] = '\0';
		i++;
	}
	d[start + i] = '\0';
	return (d);	
}
