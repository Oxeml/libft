//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char *ft_itoa (int n)
{
	char	*str;
	int	size;
	int number;

	number = n;
	size = n > 0 ? 0:1;
	number = number > 0 ? number : -number;
	//determine the size of the future string
	while (n)
	{
		n /= 10;
		size++;
	}
	str = (char*)malloc(size + 1);
	if (!str)
		return (NULL);
	*(str + size) = '\0';
	size--;
	while (number > 0)
	{
		*(str + size--) = number % 10 + '0';
		number /= 10;
	}
	return (str);
}

int main ()
{
	printf("%s\n", ft_itoa(-9865));
	return (0);
}
