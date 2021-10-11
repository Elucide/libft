int	ft_isalpha(char c)
{
	return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}


#include <stdio.h>
int	main(/*int ac, char **av*/)
{
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha('%'));
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha('/'));
	printf("%d\n", ft_isalpha('0'));
	printf("%d\n", ft_isalpha(0));
}