/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:14:23 by jcummins          #+#    #+#             */
/*   Updated: 2023/10/18 17:30:52 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	main(int argc, char	**argv)
{
	unsigned char	c;

	c = '5';
	{
		if (ft_isdigit(c))
			printf("The char %c is a digit", c);
		else
			printf("The char %c is not a digit", c);
	}
	return (0);
}
