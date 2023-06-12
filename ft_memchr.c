//#include <stdio.h>
//#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	char *str;
	str = (char*)s;

	while (n != 0)
	{
		if (*str == (char)c)
			return(str);
		str++;
		n--;
	}
	return (0);
}
/*
int main ()
{
	const char str[] = "some text";
	char a = 'e';
	ft_memchr(str, a, 5);
	return (0);
}
*/
