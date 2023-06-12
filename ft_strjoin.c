#include "libft.h"

char *ft_strjoin (char const *s1, char const *s2)
{
	int	i;
	int	j;
	char	*join_str;
	
	if (!s1 || !s2 ||
	!(join_str = (char*)malloc(strlen(s1) + strlen(s2))))
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{	
		join_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		join_str[i] = s2[j];
		i++;
		j++;
	}
	join_str[i] = '\0';
	return(join_str);
}	
	
/*
int main()
{
	char s1[10] = "hey ";
	char s2[5] = "you";
	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}
*/
