/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 02:54:05 by oemelyan          #+#    #+#             */
/*   Updated: 2023/06/13 23:45:55 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

char	function_f(unsigned int c, char a)
{
	return ((char)(a + c));
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int c, char *))
{
	char			*string;
	unsigned int	i;

	string = (ft_strdup(s));
	if (!(string))
		return (NULL);
	i = 0;
	while (s[i])
	{
		string[i] = function_f(i, s[i]);
		i++;
	}
	return (string);
}

// int main()
// {
// 	char string[] = "HELLO";
// 	char *new_string = ft_strmapi (string, function_f);
// 	printf("%s\n", new_string);
// 	free(new_string);
// 	return(0);
// }

	//int	len;

	//len = 0;
	//while (*s)
	//	len++;

	//string = (char*)malloc(sizeof(char)*(len + 1));