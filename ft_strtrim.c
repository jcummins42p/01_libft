/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:05:20 by jcummins          #+#    #+#             */
/*   Updated: 2023/10/24 17:43:37 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char c)
{
	char	*trim;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (s1[i] == c)
		i++;
	while (s1[i])
	{
		j++;
		i++;
	}
	while (s1[--i] == c)
		j--;
	trim = (char *)malloc(j * sizeof(char));
	if (trim == NULL)
		return (NULL);
	while (k < j)
		trim[k++] = s1[(++i - j)];
	trim[k] = '\0';
	return (trim);
}

int	main(void)
{
	char	*s = "GGGHello There!GGGGG";
	char	c = 'G';

	printf("The trimmed string is: \"%s\"\n", ft_strtrim(s, c));
	return (0);
}
