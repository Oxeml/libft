/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:43:50 by oemelyan          #+#    #+#             */
/*   Updated: 2023/06/16 17:10:16 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*three_am_func(char *dest, char *src, size_t len)
{
	char		*d;
	char		*s;

	d = (char *)dest;
	s = src;
	if (d < s)
	{
		while (len--)
		{
			*d++ = *s++;
		}
	}
	if (s <= d)
	{
		d += len;
		s += len;
		while (len--)
		{
			*--d = *--s;
		}
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (src == 0 && dest == 0)
	{
		return (NULL);
	}
	return (three_am_func(dest, (char *)src, len));
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
