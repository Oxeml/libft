#include <stdio.h>
#include "libft.h"

int ft_isascii (int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int main (void)
// {
// 	int result;

// 	char str[1] = "≥";
// 	result = ft_isascii(str);
// 	printf("%d\n", result);
// 	return (0);
// }
