/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 02:27:39 by oemelyan          #+#    #+#             */
/*   Updated: 2023/06/14 10:34:54 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	dst_init_len;
	size_t	src_len;
	char	*joined_string;

	dst_init_len = ft_strlen(s1);
	src_len = ft_strlen(s2);
	joined_string = (char *)malloc(sizeof(char) * (src_len + dst_init_len + 1));
	if (!joined_string)
		return (NULL);
	while (*s1)
	{
		*joined_string++ = *s1++;
	}
	i = 0;
	while (*s2)
	{
		joined_string[dst_init_len + i] = s2[i];
		i++;
	}
	joined_string[dst_init_len + i] = '\0';
	return (joined_string);
}

// int main ()
// {
// 	char src_1[25] = "so tired";
// 	char dst_1[15] = "ohoh ";

// 	printf("%sl\n", ft_strjoin(dst_1, src_1));
// 	return (0);
// }
