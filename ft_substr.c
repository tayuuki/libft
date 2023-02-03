#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;
	size_t	i;

	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	d = (char *)malloc(sizeof(*s) * (len + 1));
	if (!d)
		return (NULL);
	i = 0;
	while (s[start])
	{
		if (i < len)
		{
			d[i] = s[start];
			i++;
		}
		start++;
	}
	d[i] = 0;
	return (d);
}