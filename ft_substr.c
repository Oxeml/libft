#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
		
}

int main ()
{
	char *str;
	char *res;

	str = "Wish you to have a great day";
	res = ft_substr(str, 5, 10);
	printf("%s\n", res);
	return (0);
}
