#include "libft.h"

char *ft_substr (char const *s, unsigned int start, size_t len)
{
	char *sub_str;
	size_t i;
	size_t j;

	if (!s ||!(sub_str = (char*)malloc(len + 1)))
		return (NULL);
	i = start;
	j = 0;
	while (*s && j < len)
		sub_str[j++] = s[i++];
	sub_str[j] = '\0';
	return (sub_str);
}


