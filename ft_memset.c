/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:43:59 by oemelyan          #+#    #+#             */
/*   Updated: 2023/06/13 02:10:07 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int num, size_t n)
{
	unsigned int		i;
	char				*ptr;

	ptr = (char *) str;
	i = 0;
	while (i < n)
	{
		ptr[i] = num;
		i++;
	}
	return (ptr);
}

// int main (void)
// {
// 	char symb;
// 	size_t len;
// 	char str[15] = "Hello you";

// 	len = 8;
// 	symb = 'a';
// 	ft_memset(str, symb, len);
// 	puts(str);
// 	return (0);
// }
