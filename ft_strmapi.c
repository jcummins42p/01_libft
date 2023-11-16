/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:40:48 by jcummins          #+#    #+#             */
/*   Updated: 2023/11/16 14:30:34 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	remap(unsigned int i, char c)*/
/*{*/
	/*if (c != ' ')*/
		/*c = c + i;*/
	/*return (c);*/
/*}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*str;

	i = 0;
	len = ft_strlen(s + 1);
	if (!s || !f)
		return (NULL);
	str = (char *)malloc((len) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
