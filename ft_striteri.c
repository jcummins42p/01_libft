/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:33:55 by jcummins          #+#    #+#             */
/*   Updated: 2023/10/25 15:47:58 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	remap(unsigned int i, char c)
{
	if (c != ' ')
		c = c + i;
	return (c);
}

void	*ft_striteri(char *s, char (*f)(unsigned int, char))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		s[i] = f(1, s[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	str1[12] = "Hello There!";

	printf("Untranslated string: %s\n", str1);
	ft_striteri(str1, *remap);
	printf("Translated string: %s\n", str1);
	return (0);
}
