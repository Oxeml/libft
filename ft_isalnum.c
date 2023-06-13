/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 01:30:19 by oemelyan          #+#    #+#             */
/*   Updated: 2023/06/13 23:16:47 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int n)
{
	if (!((n >= 48 && n <= 57)))
		return (0);
	else if (!((n >= 65 && n <= 90) || (n >= 97 && n <= 122)))
		return (0);
	return (1);
}

/*int main (void)
{
	int result;

	char str[1] = "}";
	result = ft_isalnum(str);
	printf("%d\n", result);
	return (0);
}
*/