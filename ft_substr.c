#include "libft.h"

// char *ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char			*d;
// 	unsigned int	i;

// 	if ((unsigned int)ft_strlen(s) < start)
// 		return (ft_strdup(""));
// 	d = (char *)malloc(sizeof(*s) * (len + 1));
// 	if (d == NULL || s == NULL)
// 		return (NULL);
// 	i = 0;
// 	while (len-- && s[start + i] != '\0') {
// 		d[start + i] = s[start + i];
// 		i++;
// 	}
// 	while (len--) {
// 		d[start + i] = '\0';
// 		i++;
// 	}
// 	d[start + i] = '\0';
// 	return (d);	
// }

// MKOでます
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*d;

	if (!s)
		return (NULL);
	d = (char*)malloc(sizeof(*s) * (len + 1));
	if (!d)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			d[j] = s[i];
			j++;
		}
		i++;
	}
	d[j] = 0;
	return (d);
}