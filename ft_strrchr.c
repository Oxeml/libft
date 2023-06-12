#include <stdio.h>
#include <stddef.h>

size_t ft_strlen (const char *s)
{
	size_t	counter;
	
	while (*s)
		counter++;
	return (counter);
}


char *ft_strrchr (const char *s, int c)
{
	int	len;
	char	ch;

	ch = c;
	len = ft_strlen (s);

	while (len >= 0)
	{
		if (s[len] == ch)
			return ((char *)(s + len));
		len --;
	}
	return (NULL);
}

int main (void)
{
	char a = 'e';
	printf("%s\n", ft_strrchr ("Some text", a));
	return (0);
}
