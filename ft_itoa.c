/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <yschecro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:34:22 by yschecro          #+#    #+#             */
/*   Updated: 2021/10/11 17:08:42 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len_nu(int nu)
{
	int i;
	int power;

	power = 1;
	i = 1;
	while (nu > 0)
	{
		nu %= power * 10;
		i++;
	}
	return (i);
}

int	div(int len)
{
	int i;

	if (len == 1)
		return (1);
	i = 1;
	while (len > 1)
	{
		i *= 10;
		len--;
	}
	return (i);
}

char *ft_itoa(int n)
{
	char *out;
	int len;
	int i;

	if (n == -2147483648)
	return ("-2147483648\0");
	if (n < 0)
	{
		n *= -1;
		out[0] = '-';
		i++;
		len--;
	}
	len = len_nu(n) + 1;
	i = -1;
	out = malloc(sizeof(char) * len);
	if (!out)
		return (out);
	while (len != 0)
		out[i++] = ((nbr / div(len--)) % 10) + 48 ;
	out[i] = 0;
	return (out);
}

#include <stdio.h>
int main(int ac, char av)
{
	printf("_%s_\n", ft_itoa(atoi(av[ac -1])))
}