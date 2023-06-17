/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:44:50 by oemelyan          #+#    #+#             */
/*   Updated: 2023/06/16 18:47:25 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);	
		i--;
	}
	return (NULL);
}

// int main(void)
// {
// 	const char str[] = "teste";
// 	const char ch = 'e';
// 	char *ret;

// 	ret = ft_strrchr(str, ch);
// 	printf("the last occurence of |%c| is |%s|", ch, ret);
// 	return(0);
// }
