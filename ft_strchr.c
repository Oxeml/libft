#include "libft.h"
//#include <stdio.h>

char *ft_strchr (const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
		       return((char*)s);
		s++;
	}
	return (NULL);
}
/*
int main ()
{
	printf ("%s\n", ft_strchr("hello", 'e'));
	return (0);
}
*/
