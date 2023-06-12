//#include <stdio.h>
//#include <stdlib.h>

void *ft_memset (void *s, int c, size_t len)
{
	unsigned char	*ch;

	ch = s;	
	while (len > 0)
	{
		*ch = c;
		ch++;
		len--;
	}
	return (s);
}

/*int main ()
{
	char *s;
	s = malloc(6);

	if (!s)
		return (1);

	ft_memset(s,'a', 5);
	s[5] = '\0';
	printf("%s\n",s);
	free(s);
	return (0);
}
*/
