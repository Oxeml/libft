/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:44:50 by oemelyan          #+#    #+#             */
/*   Updated: 2023/06/13 23:38:25 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	char		*ret;

	i = ft_strlen(s);
	ret = (char *)s;
	while (ret[i] != c)
			i--;
	if (ret[i] == c)
		return (ret + i);
	if (ret[i] == '\0' && c == '\0')
		return (ret + i);
	else
		return (NULL);
}

/*int main(void)
{
	const char str[] = "hi i am here";
	const char ch = 'i';
	char *ret;

	ret = ft_strrchr(str, ch);
	printf("the last occurence of |%c| is |%s|", ch, ret);
	return(0);
}*/
