/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:44:08 by oemelyan          #+#    #+#             */
/*   Updated: 2023/04/07 21:44:11 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c)
{
    char a;
    int i;
    char *ret;

    i = 0;
    a = (char) c;
    ret = (char*)s;

    while (ret[i] != '\0' && ret[i] != c)
        {
            i++;
        }
    if ( ret[i] == c)
        return(ret + i);
    else if (ret[i] == '\0' && c == '\0')
        return(ret + i);
    else 
        return(NULL);
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
/*int main (void)
{
	const char str[] = "and still I see no changes";
	const char ch = '5';
	char *ret;

	ret = strchr(str, ch);
	printf("string after |%c| is - |%s|\n", ch, ret);
	return (0);
}
*/