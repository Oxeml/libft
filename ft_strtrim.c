/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 22:29:25 by oemelyan          #+#    #+#             */
/*   Updated: 2023/06/13 22:58:19 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	if (!s1 || !set)
		return (0);
	while (*s1 && strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}

// int	main(void)
// {
// 	char	*str;
// 	char	*result;

// 	result = "nana apple pineapp";
// 	str = ft_strtrim("banana apple pineapple", "bale");
// 	printf("Test 1: %s\n", str);
// 	str = ft_strtrim("\0", "bale");
// 	printf("Test 2: %s\n", str);
// 	str = ft_strtrim("", "bale");
// 	printf("Test 3: %s\n", str);
// 	str = ft_strtrim(NULL, "bale");
// 	printf("Test 4: %s\n", str);
// 	str = ft_strtrim("Das ist string", NULL);
// 	printf("Test 5: %s\n", str);
// 	str = ft_strtrim(NULL, NULL);
// 	printf("Test 6: %s\n", str);
// 	return (0);
// }
