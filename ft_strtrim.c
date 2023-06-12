#include <stdio.h>
//#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char* new_string[];
	unsigned int i;
	unsigned int new_string_length;
	unsigned int src_lenght;
	unsigned int the_last;

	src_length = ft_strlen(s1);
	i = 0;
	//to check whether there are set chars at the beginning of the string
	if (str[i] == set[j])
	   i++;

	j = 0;
	//to check whether there are set chars at the end of the string
	if (str[len - 1] == set[j])
		len--;	
	
	//wdim to delete - not to copy??
	new_string_length = src_length - i - len;
	new_string = malloc(new_string_length * 1);
	if (!new_string)
		return(NULL);
	the_last = 0;
	while (the_last < new_string_length)
	{
		new_string[the_last] = s1[the_last];
		the_last++;
	}
	return(new_string);
	
}

int main ()
{
	char src[] = "*Hello*/";
	char set[] = "*9/";

	printf("%s\n", ft_strtrim(src, set));
	return(0);
}
