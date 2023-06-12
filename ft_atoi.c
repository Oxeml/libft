#include "libft.h"

int ft_atoi (const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if ((str[i] == '-') || (str [i] == '+'))
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	while ((char)str[i] >= '0' && (char)str[i] <= '9')
	{
		res = (str[i] - '0') + res * 10;
		i++;
	}
	return (res * sign);
}
/*
int main ()
{
	char str[] = "     --8676";
	printf("%d\n", atoi(str));
	return (0);
}
*/
