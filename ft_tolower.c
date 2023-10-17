#include "libft.h"
#include <unistd.h>
#include <stdio.h>

char *ft_tolower(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "Error, please provide one argument\n", 34);
		return (1);
	}
	else
	{
		printf("The string in lowercase is %s\n", ft_tolower(argv[1]));
	}
	return (0);
}
