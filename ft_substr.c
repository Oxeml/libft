/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 03:06:09 by oemelyan          #+#    #+#             */
/*   Updated: 2023/06/13 23:38:38 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;
	size_t	j;

	sub_str = (char *)malloc(len + 1);
	if (!s ||!(sub_str))
		return (NULL);
	i = start;
	j = 0;
	while (*s && j < len)
		sub_str[j++] = s[i++];
	sub_str[j] = '\0';
	return (sub_str);
}

// int main ()
// {
// 	char *str;
// 	char *res;

// 	str = "Wish you to have a great day";
// 	res = ft_substr(str, 5, 10);
// 	printf("%s\n", res);
// 	return (0);
// }
