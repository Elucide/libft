/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <yschecro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:51:33 by yschecro          #+#    #+#             */
/*   Updated: 2021/11/10 10:51:33 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	int	i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	tab = malloc(sizeof(size) * (nmemb + 1));
	ft_bzero(tab, size);
	return (tab);
}
