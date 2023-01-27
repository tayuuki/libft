int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 32);
	return (c);
}

// #include <ctype.h>
// #include <libc.h>
// int	main()
// {
// 	printf("%c\n", toupper('a'));
// 	printf("%c\n", toupper('A'));
// 	printf("%c\n", ft_toupper('a'));
// 	printf("%c", ft_toupper('A'));
// 	return (0);
// }