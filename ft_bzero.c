/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:55:00 by jcummins          #+#    #+#             */
/*   Updated: 2023/10/19 15:26:03 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

void	bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (n > 0)
	{
		str[i] = '\0';
		i++;
	}
}

int	main(void)
{
	char	teststr[] = "test string";

	printf("%s\n", teststr);
	bzero(teststr, 6);
	printf("%s\n", teststr + 5);
	return (0);
}
