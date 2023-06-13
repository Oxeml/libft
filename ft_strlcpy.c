/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:44:20 by oemelyan          #+#    #+#             */
/*   Updated: 2023/06/13 23:00:22 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	unsigned long	i;
	unsigned long	src_len;

	i = 0;
	src_len = 0;
	if (len == 0)
		return (ft_strlen(src));
	while (i < len - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < len)
		dst[i] = '\0';
	while (*(src + src_len) != '\0')
	{
		src_len++;
	}
	return (src_len);
}

/*int main (void)
{
	char src[7] = "abcdef";
	char *src2 = "abcdefghij";
	// char *src3 = NULL;

	char dst[7];
	int		len;
	int size;

	len = 6;
	size = strlcpy(dst, src, len);
	printf("   strlcpy: |%s| , size = %d\n", dst, size);
	size = ft_strlcpy(dst, src, len);
	printf("ft_strlcpy: |%s| , size = %d\n", dst, size);
	lorem ipsum dolor sit amet
	
	size = strlcpy(dst, src2, len);
	printf("   strlcpy: |%s| , size = %d\n", dst, size);
	size = ft_strlcpy(dst, src2, len);
	printf("ft_strlcpy: |%s| , size = %d\n", dst, size);

	// size = strlcpy(dst, src3, len);
	// printf("   strlcpy: |%s| , size = %d\n", dst, size);
	// size = ft_strlcpy(dst, src3, len);
	// printf("ft_strlcpy: |%s| , size = %d\n", dst, size);
	return (0);
}	
*/