#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char *d;
	char *s2;
	char *s3;
	size_t i;

	if (!s1 || !set)
		return (0);
	s2 = (char *)s1;
	while (!s2)
	{
		s2 = ft_strnstr(s2, set, ft_strlen(s2));
		s3 = s2;
		i = -1;
		while (s3[++i + ft_strlen(set)])
			s3[i] = s3[i + ft_strlen(set)];
	}
	d = (char *)malloc(sizeof(*s1) * (ft_strlen(s2) + 1));
	if (!d)
		return (NULL);
	ft_strlcpy(d, s2, ft_strlen(s2) + 1);
	return (d);
}