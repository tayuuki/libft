#include "libft.h"

// char *ft_strtrim(char const *s1, char const *set)
// {
// 	char *d;
// 	char *s2;
// 	char *s3;
// 	size_t i;

// 	if (!s1 || !set)
// 		return (0);
// 	s2 = (char *)s1;
// 	while (!s2)
// 	{
// 		s2 = ft_strnstr(s2, set, ft_strlen(s2));
// 		s3 = s2;
// 		i = -1;
// 		while (s3[++i + ft_strlen(set)])
// 			s3[i] = s3[i + ft_strlen(set)];
// 	}
// 	d = (char *)malloc(sizeof(*s1) * (ft_strlen(s2) + 1));
// 	if (!d)
// 		return (NULL);
// 	ft_strlcpy(d, s2, ft_strlen(s2) + 1);
// 	return (d);
// }

#include "libft.h"

static int
	ft_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char
	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && ft_char_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_char_in_set(s1[end - 1], set))
		end--;
	str = (char*)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}