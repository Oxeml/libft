/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 01:30:00 by oemelyan          #+#    #+#             */
/*   Updated: 2023/06/15 21:49:19 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_calloc(size_t count, size_t size)
// {
// 	void	*res;

// 	if (!size && ((count * size) / size) != count)
// 		return (NULL);
// 	res = malloc(size * count);
// 	if (!res)
// 		return (NULL);
// 	ft_bzero(res, size * count);
//  }

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	total_size;

	if (size > 0 && (UINT64_MAX / size) < count)
		return (NULL);
	total_size = count * size;
	str = malloc(total_size);
	if (!str)
		return (NULL);
	ft_bzero(str, total_size);
	return (str);
}
