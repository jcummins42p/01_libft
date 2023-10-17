#include "libft.h"
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char* str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char** argv)
{
	if (argc != 2)
	{
		write(1, "Error, please provide one argument\n", 35);
		return (1);
	}
	else
	{
		printf("The length of your string is %d", ft_strlen(argv[1]));
	}
	return (0);
}
