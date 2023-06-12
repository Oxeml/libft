/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 04:43:13 by oemelyan          #+#    #+#             */
/*   Updated: 2023/04/07 21:45:09 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <ctype.h>

int ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	
	return (c);

}
// int main(void)
// {
// 	char c;

// 	c = 'T';
// 	printf("my func output for the lowercase input: %c\n", ft_toupper(c));
// 	printf("library output for the lowercase input: %c\n", toupper(c));

// 	return (0);
// }
