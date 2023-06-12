#include "libft.h"
#include <stdio.h>

int ft_isalnum (int n)
{
	if (!((n >= 48 && n <= 57) || (n >= 65 && n <= 90) || (n >= 97 && n <= 122)))
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