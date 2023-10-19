/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:45:54 by jcummins          #+#    #+#             */
/*   Updated: 2023/10/19 17:47:34 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

char	*ft_toupper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
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
		printf("The string in uppercase is %s\n", ft_toupper(argv[1]));
	}
	return (0);
}
