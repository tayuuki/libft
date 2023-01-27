int	ft_isprint(int c)
{
	return (32 <= c && c <= 126);
}

// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
// 	printf("%d", ft_isprint('\0'));
// 	printf("%d", ft_isprint(' '));
// 	printf("%d", isprint('\0'));
// 	printf("%d", isprint(' '));
// 	return (0);
// }