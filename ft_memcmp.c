/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:43:24 by oemelyan          #+#    #+#             */
/*   Updated: 2023/06/13 23:46:39 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str3, const void *str4, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)str3;
	str2 = (unsigned char *)str4;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// int main (void)
// {
// 	char str1[10] = "hello";
// 	char str2[10] = "hellooo";
// 	size_t n;
// 	//const void *ptr1;
// 	//const void *ptr2;
// 	int res;
// 	int check;

// 	res = ft_memcmp(str1, str2, 4);
// 	printf("the result is: %d\n", res);
// 	check = memcmp(str1, str2, 4);
// 	printf("the check is: %d\n", check);
// 	return (0);
// }
