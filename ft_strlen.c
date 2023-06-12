//#include <stdio.h>

size_t ft_strlen(const char *s)
{
	size_t	i;
	
	i = 0;
	while (s[i])
		i++;
	return (i);
}

//int main ()
{
	printf("%u\n", ft_strlen("some text"));
	return (0);
}
