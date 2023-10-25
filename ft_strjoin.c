/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:28:46 by jcummins          #+#    #+#             */
/*   Updated: 2023/10/25 18:53:36 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j++])
		i++;
	join = (char *)malloc(i * sizeof(char));
	if (join == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		join[j++] = s1[i++];
	i = 0;
	while (s2[i])
		join[j++] = s2[i++];
	join[j] = '\0';
	return (join);
}

/*int	main(void)*/
/*{*/
	/*char	*str1;*/
	/*char	*str2;*/

	/*char	str1 = "Hello There ";*/
	/*char	str2 = "General Kenobi";*/
	/*printf("The string is: \"%s\"\n", ft_strjoin(str1, str2));*/
	/*return (0);*/
/*}*/
