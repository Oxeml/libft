
void *assign (void *s, int c, size_t n)
{
	unsigned char	*ch;

	ch = s;
	while (n > 0)
	{
		*ch = c;
		ch++;
		n--;
	}
	return (s);
}

void *ft_bzero (void *s, size_t n)
{
	assign (s, '\0', n);
	return (s);
}

/*
int main ()
{
	unsigned char	string[10];
	ft_bzero(string, 5);
	printf("%s\n", string);
	return (0);
}
*/
