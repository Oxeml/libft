/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 05:03:34 by oemelyan          #+#    #+#             */
/*   Updated: 2023/04/07 21:42:57 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int ft_isdigit (int n)
{
	if ((n >= '0' && n <= '9'))
		return (1);
	return(0);
}

// if a && b = true if a == 1 and b ==1

// if !(a&&b) = true if a ==0 and b == 0

/*int main (void)
{
	int result;

	char str[1] = "h";
	result = ft_isdigit(str);
	printf("%d\n", result);
	return (0);
}
*/