#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	function_f(unsigned int c, char a)
{
	return(char)(c - 32);
}

char *ft_strmapi(char const *s, char(*f)(unsigned int c, char a))
{
	char	*string;
	unsigned int	i;
	//int	len;

	//len = 0;
	//while (*s)
	//	len++;

	//string = (char*)malloc(sizeof(char)*(len + 1));
	string = (strdup(s));
	if(!(string))
		return(NULL);
	i = 0;
	while(s[i])
	{
		string[i] = function_f(i, s[i]);
		i++;
	}
	return (string);
}

int main()
{
	char string[] = "HELLO";
	char *new_string = ft_strmapi (string, function_f);
	printf("%s\n", new_string);
	free(new_string);
	return(0);
}
