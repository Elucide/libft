/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <yschecro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:33:18 by yschecro          #+#    #+#             */
/*   Updated: 2021/10/19 12:33:18 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/*
	PARTIE 1
*/
int		ft_isalpha(int c);
int		ft_isprint(int c);
char	*ft_strndup(char *str, int j);
int		ft_atoi(const char *str);
int		ft_memcmp(const void *s1, const void *s2, int n);    
int		ft_strncmp(const char *s1, const char *s2, int n);   
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, int n);                                                                                 
char	*ft_strdup(char *str);                                           
int		ft_strlcpy(char *dest, char *src, int size);
int		ft_strlen(char *str);
int		ft_strlcat(char *dest, char *src, int size);                       
void	ft_putstr(char *str);
void	ft_bzero(void *s, int n);
void	*ft_calloc(int nmemb, int size);
void	*ft_memcpy(void *dest, const void *src, int n);
void	*ft_memmove(void *dest, void *src, int n);
void	*ft_memchr(const void *s, int c, int n);
void	*ft_memset(void *s, int c, int n);

/*
	PARTIE 2
*/

char	*ft_substr(char const *s, unsigned int start, int len);
char	*ft_itoa(int nbr);
char	**ft_split(char *str, char sep);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
char	*ft_strtrim(char const *s1, char const *set);

#endif