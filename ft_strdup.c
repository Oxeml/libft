#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}
size_t ft_strlcpy (char *dst, const char *src, size_t len)
{
	unsigned long i;
	unsigned long src_len;

	i = 0;
	src_len = 0;
	
	if (len == 0)
		return (ft_strlen(src));
	while (i < len - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < len)
		dst[i] = '\0';

	while (*(src + src_len) != '\0')
	{
		src_len++;
	}
	
	return (src_len);
}

char *ft_strdup (const char *s)
{
	size_t src_len;
	char *str_copy;
	
	src_len = ft_strlen(s);
	str_copy = malloc(src_len + 1);
	if (!str_copy)
		return (0);
	ft_strlcpy(str_copy, s, src_len);
	return (str_copy);
}

int main ()
{
	char *str = "Hello yall";
	char *res;

	res = ft_strdup(str);
	printf("%s\n", res);
	return(0);
}

