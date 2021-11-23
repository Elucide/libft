/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <yschecro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:27:20 by yschecro          #+#    #+#             */
/*   Updated: 2021/11/10 10:51:18 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	is_charset(char c, char const *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
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

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		end;
	int		len;
	char	*out;

	end = ft_strlen(s1);
	i = 0;
	while (is_charset(s1[i], set))
		i++;
	while (is_charset(s1[end - 1], set) && end)
		end--;
	len = end - i;
	printf("len :%d\n", len);
	out = malloc(sizeof(char) * len);
	if (!out)
		return (NULL);
	end = 0;
	len += i;
	while (i != len)
	{
		out[end] = s1[i];
		i++;
		end++;
	}
	return (out);
}

int	main(int ac, char **av)
{
	printf("_%s_ : _%s_\n", av[1], ft_strtrim(av[1], av[ac - 1]));
}
