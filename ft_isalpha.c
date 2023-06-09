/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 20:33:24 by oemelyan          #+#    #+#             */
/*   Updated: 2023/06/13 01:33:52 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int n)
{
	if (!((n >= 65 && n <= 90) || (n >= 97 && n <= 122)))
		return (0);
	return (1);
}
