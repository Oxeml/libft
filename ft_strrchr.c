/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:44:50 by oemelyan          #+#    #+#             */
/*   Updated: 2023/04/07 21:44:53 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
//#include <string.h>

/*size_t ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}*/
char *ft_strrchr(const char *s, int c)
{
	int i;
	char *ret;

	i = ft_strlen(s);
	ret = (char*)s;
	while (ret[i] != c)
			i--;
	if (ret[i] == c)
		return(ret + i);
	if (ret[i] == '\0' && c == '\0')
		   return(ret + i);
	else
		return(NULL);
}
		
	
/*int main(void)
{
	const char str[] = "hi i am here";
	const char ch = 'i';
	char *ret;

	ret = ft_strrchr(str, ch);
	printf("the last occurence of |%c| is |%s|", ch, ret);
	printf("\n the last occurence original function of |%c| is |%s|", ch, strrchr(str, ch));
	return(0);
}*/
