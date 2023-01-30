#include "libft.h"
// #include<libc.h>

// char *ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char			*d;
// 	unsigned int	i;

// 	if ((int)ft_strlen(s) < start)
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char*)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}