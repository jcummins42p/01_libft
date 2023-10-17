#include "libft.h"
#include <unistd.h>

int	ft_isalnum(char* str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z')
			&& (str[i] < '0' || str[i] > '9'))
			return (0);
		i++;
	}
	return (1);
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
		write(1, "Thank you for your argument\n", 28);
	}
	if (ft_isalnum(argv[1]))
	{
		write(1, "The string contains only alnums\n", 33);
	}
	else if (!ft_isalnum(argv[1]))
	{
		write(1, "The string does not contain only alnums\n", 41);
	}
	write(1, "Program exit\n", 13);
	return (0);
}
