/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <yschecro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:34:22 by yschecro          #+#    #+#             */
/*   Updated: 2021/10/19 12:06:40 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	ft_size(int n)
{
	int	count;

	count = 0;
	if (n < 0)
		n = n * -1;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int nb)
{
	char		*out;
	int			i;
	long int	n;
	int			size;

	n = nb;
	size = ft_size(n);
	out = malloc(sizeof(char) * (size));
	if (out == NULL)
		return (NULL);
	i = 0;
	if (size == 0 || n < 0)
		size++;
	if (n < 0)
	{
		n *= -1;
		out[0] = '-';
		i++;
	}
	while (size-- > i)
	{
		out[size] = (n % 10) + 48;
		n = n / 10;
	}
	return (out);
}

int	main(int ac, char **av)
{
	printf("_%s_\n", ft_itoa(atoi(av[ac - 1])));
}
