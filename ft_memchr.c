/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:43:14 by oemelyan          #+#    #+#             */
/*   Updated: 2023/06/17 13:41:38 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s1;

	i = 0;
	s1 = (char *)s;
	while (i < n)
	{
		if (s1[i] == (char)c)
			return (&s1[i]);
		i++;
	}
	return (NULL);
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
// 	return (0);
// }
