#include <stdio.h>

int ft_strncmp (const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
				return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

int main()
{
	printf ("%d\n", ft_strncmp("hey", "Hey", 3));
	return (0);
}
