#include "libft.h"
#include <unistd.h>

int	ft_isprint(char* str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 && str[i] > 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char** argv)
{
	if (argc != 2)
	{
		write(1, "Error, please provide one argument\n", 34);
		return (1);
	}
	else
	{
		write(1, "Thank you for your argument\n", 28);
	}
	if (ft_isprint(argv[1]))
	{
		write(1, "The string contains only printables\n", 37);
	}
	else if (!ft_isprint(argv[1]))
	{
		write(1, "The string does not contain only printables\n", 45);
	}
	write(1, "Program exit\n", 13);
	return (0);
}
