#include <stdio.h>
#include <string.h>
#include "libft.h"

void ft_bzero(void *str, size_t n)
{
	unsigned int i;
	char *ptr;

	ptr = (char*) str;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

// int main (void)
// {
// 	char symb;
// 	size_t len;
// 	char str[15] = "hello you";

// 	len = 5;
// 	ft_bzero(str, len);
// 	puts(str);

// 	return (0);
// }
