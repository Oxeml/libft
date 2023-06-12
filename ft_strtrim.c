#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

char *ft_strtrim (char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && strchr(set, *s1))
		s1++;
	i = strlen (s1);
	while (i && strchr (set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}

int main ()
{
	printf("%s\n", ft_strtrim("aaoohello", "ao"));
	return (0);
}
