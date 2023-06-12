#include <stdio.h>

unsigned long how_many_words(char const *s, char c)
{
	unsigned long	words_counter;

	words_counter = 0;
	//we need to count words
	while (*s)
	{
		if (*s != c)
		{
			words_counter++;
			while (*s != c)
				s++;
	}
		s++;
	}
	return (words_counter);
}

char *word_cut (const char *str, int start, int end)
{
	char	*word;
	int	i;

	i = 0;
	word = malloc((end - start)*sizeof(char));
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}



char **ft_split(char const *s, char c)
{
	char **arr_collection;
	int	n;

	n = how_many_words(string, delimiter) + 1;
//to allocate memory for all words we counted plus one
	char** arr_collection = (char**)malloc(n * sizeof(char*));
	while(??)
		arr_collection [i++] = word_cut(s, start, end)
	arr_collection[i] = 0;
}


int main ()
{
	split(" Fucking split and my code is a shit", ' ');
	return (0);
}
