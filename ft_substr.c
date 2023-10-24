/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:56:25 by jcummins          #+#    #+#             */
/*   Updated: 2023/10/24 17:02:45 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	sub = (char *)malloc((len) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	while (i < len && s[start])
	{
		sub[i++] = s[start++];
	}
	return (sub);
}

int	main(void)
{
	char	*str = "Test String";

	printf("The string is: \"%s\"\n", str);
	printf("The string is: \"%s\"\n", ft_substr(str, 9, 1));
	return (0);
}
