#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	function_f(unsigned int c, char a)
{
	return(char)(c - 32);
}

char *ft_striteri (char const *s, char(*f)(unsigned int c, char a))
{
	char	*string;
	string = (char*)s;
	unsigned int	i;
	i = 0;
	while(string[i])
	{
		string[i] = function_f(i, s[i]);
		i++;
	}
	return (string);
}

int main()
{
	char string[15] = "HELLO";
	ft_striteri (string, function_f);
	printf("%s\n", string);
	return(0);
}
