/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:43:14 by oemelyan          #+#    #+#             */
/*   Updated: 2023/04/07 21:43:17 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char a;
    size_t i;
    char *ret;

    i = 0;
    a = (char) c;
    ret = (char*)s;

    while (i != n && ret[i] != c)
        {
            i++;
        }
    if ( ret[i] == c)
        return(ret + i);
    else if (ret[i] == '\0' && c == '\0')
        return(ret + i);
    else
        return(NULL);
}

// int main(void)
// {
// 	char str[] = "hello";
// 	char a;
// 	size_t n;
// 	char *ret;

// 	a = 'e';
// 	n = 4;
// 	ret = ft_memchr((const void*) str, a, n);
// 	printf("the first occurence of |%c| is |%s|", a, ret);
// 	printf("\n the original function occurence of |%c| is |%s|", a, memchr((const void*) str, a, n));
// 	return (0);
// }
