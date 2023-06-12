char *ft_strdup (const char *string)
{
	char *str_copy;
	size_t	i;

	if(!string)
		return (NULL);
	str_copy = (char*)malloc(sizeof(*string)*(ft_strlen(string) + 1));
	if (!str_copy)
		return (NULL);
	i = 0;
	while (string[i])
	{
		str_copy[i] = string[i];
		i++;
	}
	str_copy[i] = '\0';
	//printf("the size of src is: %u\n", ft_strlen (string));
	return (str_copy);
}
/*
int main()
{
	char source[10] = "hello";
	printf("the copy is: %s\n", ft_strdup(source));
	return (0);
}
*/
