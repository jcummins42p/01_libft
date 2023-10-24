/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:03:56 by jcummins          #+#    #+#             */
/*   Updated: 2023/10/23 19:05:52 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_atoi(const char *nptr)
{
	unsigned int	i;
	unsigned int	result;

	i = 0;
	result = 0;
	while (nptr[i])
		result = (result * 10) + (nptr[i++] - '0');
	return (result);
}

int	main(void)
{
	const char	*message = "12343";
	printf("The string is %s and the integer value is %d\n", message, ft_atoi(message));
	return (0);
}
/*DESCRIPTION*/
/*The atoi() function converts the initial portion of the string pointed to by nptr to int. The behaviour is the same as strtol except that atoi() does not detect errors.*/
