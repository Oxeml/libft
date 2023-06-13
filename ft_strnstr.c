/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 03:02:17 by oemelyan          #+#    #+#             */
/*   Updated: 2023/06/13 23:37:00 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;

	needle_len = ft_strlen(needle);
	if (!needle_len)
		return ((char *)haystack);
	while (*haystack && needle_len <= len)
	{
		i = ft_strncmp((char *)haystack, (char *) needle, needle_len);
		if (*haystack == *needle && i == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (0);
}

/*int main(void)
{
	char big_string[] = "Don't know anything";
	char small_string[] = "know";

	char *ptr;
	char *ptr1;

	ptr1 = ft_strnstr(big_string, small_string, 15);
	printf("my function return is: %s\n", ptr1);	
	
	ptr = strnstr(big_string, small_string, 15);
	printf("the original function return is: %s\n", ptr);
	return(0);
}*/
