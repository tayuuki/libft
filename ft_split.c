#include "libft.h"

size_t    count(char const *s, char c);

size_t count_len(char const *s, char c)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char **d;
	int i;
	size_t len;

	if (!s)
		return (NULL);
	d = (char **)malloc(sizeof(s) * (count(s, c) + 1));
	if (!d)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		len = count_len(s, c);
		if (*(s + len - 1) != c)
			d[i++] = ft_substr(s, 0, len);
		s += len;
	}
	d[i] = 0;
	return (d);
}


size_t    count(char const *s, char c)
{
    size_t    count;

    count = 0;
    while (*s != '\0')
    {
        while (*s != '\0' && *s == c)
            s++;
        if (*s != '\0' && *s != c)
            count++;
        while (*s != '\0' && *s != c)
            s++;
    }
    return (count);
}

// char    **ft_split(char const *s, char c)
// {
//     size_t        len;
//     size_t        i;
//     char        **array;

//     if (s == NULL)
//         return (NULL);
//     array = (char **) malloc((count(s, c) + 1) * sizeof(char *));
//     if (array == NULL)
//         return (NULL);
//     i = 0;
//     while (*s != '\0')
//     {
//         while (*s != '\0' && *s == c)
//             s++;
//         len = 0;
//         while (*s != '\0' && *s != c)
//         {
//             s++;
//             len++;
//         }
//         if (*(s - 1) != c)
//             array[i++] = ft_substr(s - len, 0, len); //ft_substrのmalloc失敗したら？ -> 途中まで確保したら使いたい！！といえばOK？
//     }
//     array[i] = 0;
//     return (array);
// }

// int main()
// {
// 	char *s1 = "   split       this for   me  !       ";
// 	printf("%lu", count(s1, ' '));
// 	char *s2 = "split  ||this|for|me|||||!|";
// 	char c1 = ' ';
// 	char c2 = '|';
// 	char **d1;
// 	char **d2;
// 	d1 = ft_split(s1, c1);
// 	d2 = ft_split(s2, c2);
// 	printf("%s", d1[0]);
// 	printf("%s", d2[0]);
// 	return (0);
// }

// int main()
// {
// 	char *string = "     split       this for   me  !       ";
// 	printf("%d", count_len(string, ' '));
// 	return 0;
// }