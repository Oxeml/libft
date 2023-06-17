/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 02:23:23 by oemelyan          #+#    #+#             */
/*   Updated: 2023/06/17 13:48:11 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t		src_len;
	char		*str_copy;

	src_len = ft_strlen(s);
	str_copy = malloc(src_len + 1);
	if (!str_copy)
		return (0);
	ft_strlcpy(str_copy, s, src_len);
	return (str_copy);
}

// int main ()
// {
// 	char *str = "Hello yall";
// 	char *res;

// 	res = ft_strdup(str);
// 	printf("%s\n", res);
// 	return(0);
// }
