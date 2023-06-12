/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:43:50 by oemelyan          #+#    #+#             */
/*   Updated: 2023/04/07 21:43:52 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void *ft_memmove(void *str_dest, const void *str_src, size_t len)
{
	int i;
	char *dest;
	char *src;
	char	*res;

	
	dest = (char*)str_dest;
	res = dest;
	src = (char*)str_src;
	if (src == 0 && dest == 0)
	{
		return (NULL);
	}
	i = 0;
	if (dest <= src)
	{
		while (len--)
		{
			*dest++ = *src++;
		}
	}
	if (src < dest)
	{
			dest += len;
			src += len;		
		while (len--)
			*--dest = *--src;	
	}
	return (res);
}
	

/*int main (void)
{
	char str_src[15] = "aaaaabbbbbcc";
	
	ft_memmove(str_src, str_src + 5, 7);
	puts(str_src);
	char str1[15] = "aaaaaabbbbbcc";
	memmove(str1, str1 + 5, 7);
	puts(str1);
	
	return (0);
}
*/