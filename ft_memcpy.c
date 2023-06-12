/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:43:39 by oemelyan          #+#    #+#             */
/*   Updated: 2023/04/07 22:37:57 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

// should  return string
void *ft_memcpy(void *str_dest, const void *str_src, size_t n)
{
	char	*dest;
	char	*src;
	unsigned int i;

	dest = (char *) str_dest;
	src = (char *) str_src;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (str_dest);
}

// int main (void)
// {
// 	char str_dest[15] = "";
// 	char str_src[15] = "";
// 	size_t len;

// 	len = 5;
// 	ft_memcpy((void *) str_dest + 5, (const void *) str_src, len);
// 	puts(str_dest);

// 	char str1[15];
// 	memcpy(str1, str1+5, len);
// 	puts(str1);


// 	return (0);
// }
