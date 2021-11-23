/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <yschecro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:49:52 by yschecro          #+#    #+#             */
/*   Updated: 2021/11/10 16:29:49 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, int n)
{
	int i;
	void *src2;
	
	src2 = (void *) dest; 
	i = -1;
	printf("%s\n",(char *) dest);
	printf("%s\n",(char *) src);
	while (i++ < n && src)
	{
		dest{i + 1] = src2[i + 1];
		dest++;
		src2++;
		write(1, dest, 1);
		write(1, "\n", 1);
		printf("%d\n", i);
	}
	dest = 0;
	return (dest);
}

int main()
{
	char *dest = "coucou";
	ft_memcpy(dest, "test", 2);
	printf("%s", dest);
}