/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <yschecro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:09:17 by yschecro          #+#    #+#             */
/*   Updated: 2021/11/10 10:34:25 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	unsigned int	out;

	out = 0;
	if (nb < 0)
	{
		out = nb * -1;
		ft_putchar('-');
	}
	else
		out = nb;
	if (out <= 9)
		ft_putchar(out + '0');
	else
	{
		ft_putnbr(out / 10);
		ft_putnbr(out % 10);
	}
}
