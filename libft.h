/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:26:48 by oemelyan          #+#    #+#             */
/*   Updated: 2023/04/15 16:58:49 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

int		ft_isalpha(int argument);
int		ft_isdigit(int arg);
int		ft_isalnum(int argument);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *b, int c, size_t len);
int		ft_isprint(int arg);
int		ft_isascii(int c);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *destination, const char *source, size_t size);
size_t	ft_strlcat(char *destination, const char *source, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
int	    ft_strncmp(char *s1, char *s2, unsigned int n);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
char   *strnstr(const char *haystack, const char *needle, size_t len);


void*  ft_calloc(size_t count, size_t size);

#endif