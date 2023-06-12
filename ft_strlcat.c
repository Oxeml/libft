
#include <stdio.h>
#include <string.h>

size_t ft_strlen (char *s)
{
	size_t	i;
	i = 0;
	while (s[i])
		i++;
	return (i);
}

//#include "libft.h"

size_t	ft_strlcat (char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t d_len;
	size_t s_len;
	
	d_len = ft_strlen (dst);
	s_len = ft_strlen (src);
	i = 0;
	j = ft_strlen (dst);
	if (size <= d_len)
		return (size + s_len);
	while (src[i] != '\0' && j + 1 < size)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst [j] = '\0';
	printf ("%s\n", dst);
	return (d_len + s_len);
}
		

int main ()
{
	char src[6] = "you";
	char dst [10] = "hey ";

	printf("%lu\n", ft_strlcat (dst, src, 10));
	return (0);
}

