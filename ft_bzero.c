/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 01:29:17 by oemelyan          #+#    #+#             */
/*   Updated: 2023/06/13 01:29:20 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned int	i;
	char			*ptr;

	ptr = (char *) str;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

// int main (void)
// {
// 	char symb;
// 	size_t len;
// 	char str[15] = "hello you";

// 	len = 5;
// 	ft_bzero(str, len);
// 	puts(str);

// 	return (0);
// }
