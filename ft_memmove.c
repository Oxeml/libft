/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:43:50 by oemelyan          #+#    #+#             */
/*   Updated: 2023/06/13 23:31:40 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*three_am_func(char *dest, char *src, size_t len)
{
	int			i;

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
	return (dest);
}

void	*ft_memmove(void *str_dest, const void *str_src, size_t len)
{
	char		*dest;
	char		*src;

	dest = (char *)str_dest;
	src = (char *)str_src;
	if (src == 0 && dest == 0)
	{
		return (NULL);
	}
	return (three_am_func(dest, src, len));
}

// int main (void)
// {
// 	char str_src[15] = "aaaaabbbbbcc";
// 	ft_memmove(str_src, str_src + 5, 7);
// 	puts(str_src);
// 	char str1[15] = "aaaaaabbbbbcc";
// 	memmove(str1, str1 + 5, 7);
// 	puts(str1);
// 	return (0);
// }
