#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *d;
	
	if (!s1 || !s2)
		return (0);
	d = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!d)
		return (NULL);
	ft_strlcpy(d, s1, ft_strlen(s1) + 1);
	ft_strlcat(d, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (d);
}


// #include <libc.h>
// int	main(void)
// {
// 	char *s[] = {"Hello", "World", "and", "42", "Tokyo", "!"};
// 	char e[] = " ";
// 	int i = 6;
// 	write(1, ft_strjoin(i, s, e), ft_strlen(ft_strjoin(i, s, e)));
// 	return (0);
// }