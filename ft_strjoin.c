char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	dst_init_len;
	size_t	src_len;

	dst_init_len = ft_strlen(s1);
	src_len = ft_strlen(s2);
	i = 0;
	
	while (i < (dstsize - dst_init_len - 1) && src[i] != '\0')
	{
		dst[dst_init_len + i] = src[i];
		i++;
	}
	dst[dst_init_len + i] = '\0';
	return (src_len + dst_init_len);
}

int main ()
{
	char src_1[25] = "so tired";
	char dst_1[15] = "ohoh ";

	char new_one[] = ft_strjoin(dst_1, src_1);
	printf("%s\n", new_one);
	return(0);
}
