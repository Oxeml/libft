/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:44:08 by oemelyan          #+#    #+#             */
/*   Updated: 2023/06/12 14:56:40 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str)
	{
		if (*str == (char) c)
			return (str);
		str++;
	}
	if (*str == (char) c)
		return (str);
	return (NULL);
}

/*int main (void)
{
	const char str[] = "hi I am here";
	const char ch = '\0';
	int a;
	char *ret;

	a = (int)ch;
	ret = ft_strchr(str, ch);
	printf("string after |%c| is - |%s| \n", ch, ret);
	return (0);
}
*/

// int main (void)
// {
// 	const char str[] = "and still I see no changes";
// 	const char ch = '\0';
// 	char *ret;

// 	ret = strchr(str, ch);
// 	printf("string after |%c| is - |%s|\n", ch, ret);
// 	return (0);
// }
