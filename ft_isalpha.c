int	ft_isalpha(int c)
{
	return ((65 <= c && c <= 90) || (97 <= c && c <= 122));
}

// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
// 	printf("%d", ft_isalpha('a'));
// 	printf("%d\n", ft_isalpha('A'));
// 	printf("%d", isalpha('a'));
// 	printf("%d", isalpha('A'));
// 	return (0);
// }