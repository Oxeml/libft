
void *ft_memcpy (void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return(NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		i++;
	}
	return (dst);	

}

int main ()
{
	char *dst;
	dst = malloc(5);

	ft_memcpy(dst, "some text", 3);
	dst[3] = '\0';
	printf("%s\n", dst);
	free(dst);
	return (0);
}
