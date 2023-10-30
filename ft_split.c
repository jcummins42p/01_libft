/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:46:20 by jcummins          #+#    #+#             */
/*   Updated: 2023/10/30 16:59:58 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	wcount(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
			words++;
		while (s[i] != c && s[i])
			i++;
	}
	return (words);
}

static unsigned int	lcount(char const *s, char c, int i)
{
	int	letters;

	letters = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i])
	{
		letters++;
		i++;
	}
	return (letters);
}

char	**ft_split(char const *s, char c)
{
	char			**split;
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	split = (char **)malloc((wcount(s, c) + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	while (j < wcount(s, c))
	{
		split[j] = (char *)malloc(lcount(s, c, i));
		while (s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			split[j][k++] = s[i++];
		k = 0;
		j++;
	}
	split[j] = NULL;
	return (split);
}

/*int	main(void)*/
/*{*/
	/*char const	*str;*/
	/*char		c;*/
	/*int			i;*/

	/*str = "One two three four five";*/
	/*c = ' ';*/
	/*i = 0;*/
	/*while (i < 5)*/
		/*printf("Count of %s\n", ft_split(str, c)[i++]);*/
	/*return (0);*/
/*}*/
