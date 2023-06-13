/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 02:26:03 by oemelyan          #+#    #+#             */
/*   Updated: 2023/06/13 23:46:02 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

char	function_f(unsigned int c, char a)
{
	return ((char)(a + c - c));
}

char	*ft_striteri(char const *s, char (*f)(unsigned int c, char *))
{
	char			*string;
	unsigned int	i;

	string = (char *)s;
	i = 0;
	while (string[i])
	{
		string[i] = function_f(i, s[i]);
		i++;
	}
	return (string);
}

// int main()
// {
// 	char string[15] = "HELLO";
// 	ft_striteri (string, function_f);
// 	printf("%s\n", string);
// 	return(0);
// }
