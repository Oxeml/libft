/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:12:51 by oemelyan          #+#    #+#             */
/*   Updated: 2023/06/13 19:32:59 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include "libft.h"

#include <stdio.h>

int	ft_count_words(char const *str, char delimiter)
{
	int substr_counter;
	
	substr_counter = 0;
	while (*str)
	{
	if (*str != delimiter)
	{
		substr_counter++;
		while (*str && *str != delimiter)
			str++;
	}
	else
		str++;
	}
	return (substr_counter);
}

char	*ft_strdup2(char *str, int start, int end)
{
	// if (ft_strlen(str) < end)
	// return (NULL);
	int			size;
	int			start;
	int			end;
	int			is_there_a_word
	char		*word;
	int			i;
	
	// to determine start and end point
	is_there_a_word = 0;
	while (str[i] != '\0')
	{
		if (str[i] == delimiter)
			i++;
		if (str[i] != delimiter && is_there_a_word == 0)
		{
			is_there_a_word = 1;
			start = i;
			while (str[i] != delimiter)
				i++;
			end = i;
		
		}
		
	}
	size = end - start + 1;
	word = malloc(sizeof(char) * size);
	if (word == NULL)
		return (NULL);
	i = 0;
	while (start != end)
	{
		str[i] = str[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (word);
}

char **ft_split(char const *s, char c)
{
	char			**double_array;
	int				i;

	i = ft_count_words(str, ' ');
	double_array = malloc(sizeof(char *) * (i + 1));
	double_array[i] = NULL;
	printf("The quantity of substr is: %d\n", i);
	double_array[index] = ft_strdup2();
	return (0);
}
int main ()
{
	char *str = "  Hello    how are you  ";
	ft_split (str, ' ');
}