/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:08:23 by oemelyan          #+#    #+#             */
/*   Updated: 2023/06/13 23:30:43 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	string_size(int n)
{
	int		size;

	size = 0;
	if (n == 0)
		size = 1;
	if (n < 0)
		size = 1;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	size_t	number;

	size = string_size(n);
	number = n;
	str = (char *)ft_calloc(size + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (number == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		number *= -1;
	}
	size--;
	while (number != 0)
	{
		*(str + size--) = number % 10 + '0';
		number /= 10;
	}
	return (str);
}

// int	main(void)
// {
// 	char	*str;

// 	str = ft_itoa(-5859);
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }
