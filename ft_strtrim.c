#include <stdlib.h>

int	is_charset(char c, char const *charset)
{
	int i;
	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return(1);
		i++;
	}
	return (0);
}

int	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int end;
	int	len;
	char	*out;

	end = ft_strlen(s1);
	i = 0;
	while (is_charset(s1[i], set))
		i++;
	while (is_charset(s1[end], set))
		end--;
	len = end - i;
	out = malloc(sizeof(char) * len);
	if (!out)
		return (NULL);
	end = 0;
	while (i != len)
	{
		out[end] = s1[i];
		i++;
		end++;
	}
	return (out);
}

#include <stdio.h>

int main(int ac, char ** av)
{
	printf("_%s_ : _%s_\n", av[1], ft_strtrim(av[1], av[ac - 1]));
}
