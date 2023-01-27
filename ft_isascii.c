int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}

// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
// 	printf("%d", ft_isascii('\0'));
// 	printf("%d", isascii('\0'));
// 	return (0);
// }