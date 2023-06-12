//#include <stdio.h>

size_t ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t ft_strlcpy (char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!src || !dst)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	printf("the src size is: %lu\n", ft_strlen(src));
	printf("The new dst is: %s\n", dst);
	return(ft_strlen(src));
}
/*
int main ()
{
	char src[10] = "Hello";
	char dst[10];
	printf("the result is: %lu\n", ft_strlcpy(dst, src, 10));
	return (0);
}
*/
