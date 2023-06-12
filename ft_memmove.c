#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = dst;
	s = (unsigned char*) src;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (len--)
			d[len] = s[len];
	}

	else
	{
		while (len--)
			*d++ = *s++;
	}
	return (dst);
}
/*
int main ()
{
	char source[20] = "it's so hard";
	char destin[20];
	ft_memmove (destin, source, 6);
	printf("%s\n", destin);
	return (0);
}
*/
