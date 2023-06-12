/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 23:02:01 by oemelyan          #+#    #+#             */
/*   Updated: 2023/03/29 15:42:28 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

/*size_t ft_strlen(const char *str)
{
 	int i;

 	i = 0;
 	while (str[i] != 0)
 		i++;
	return i;
}*/

size_t ft_strlcat (char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_init_len;
	size_t	src_len;
	
	dst_init_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	
	i = 0;
	if (*src == '\0')
		return (dst_init_len);
	if (dstsize == 0)
		return (src_len);
	if (dst_init_len >= dstsize)
	{
		return (src_len + dstsize);
	}
	while (i < (dstsize - dst_init_len - 1) && src[i] != '\0')
	{
		dst[dst_init_len + i] = src[i];
		i++;
	}
	dst[dst_init_len + i] = '\0';
	return (src_len + dst_init_len);
}

// int main (void)
// {
// 	// char src_1[25] = "so tired";
// 	// char dst_1[15] = "ohoh ";
	
// 	// char src_2[14] = "so tired";
// 	// char dst_2[7] = "ohoh ";
	
// 	// size_t	expected_len1;
// 	// size_t	expected_len2;

// 	// expected_len1 = ft_strlcat(dst_1, src_1, 3);
// 	// printf("my ft result: %lu\n", expected_len1);
// 	// puts (dst_1);

// 	// printf("c library result is: %lu\n", strlcat(dst_1, src_1, 3));
// 	// puts(dst_1);
	
// 	// expected_len2 = ft_strlcat(dst_2, src_2, 6);
// 	// printf("my ft result: %lu\n", expected_len2);
// 	// puts (dst_2);

// 	// printf("c library result is: %lu\n", strlcat(dst_2, src_2, 6));
// 	// puts(dst_2);
// 	// return (0);
// 	char dest[10] = "a";
//     printf("%zu",ft_strlcat(dest, "lorem ipsum dolor sit amet", 1));
//     printf("%zu",strlcat(dest, "lorem ipsum dolor sit amet", 1));
//     write(1, "\n", 1);
//     write(1, dest, 15);
// }	
