/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:40:48 by jcummins          #+#    #+#             */
/*   Updated: 2023/10/25 19:00:22 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int	ft_strlen(const char *s)*/
/*{*/
	/*int	i;*/

	/*i = 0;*/
	/*while (s[i])*/
		/*i++;*/
	/*return (i);*/
/*}*/

char	remap(unsigned int i, char c)
{
	if (c != ' ')
		c = c + i;
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*str;

	i = 0;
	len = ft_strlen((char *)s);
	if (!s || !f)
		return (NULL);
	str = (char *)malloc((len + 1) * sizeof(char *));
	while (s[i])
	{
		str[i] = f(-5, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)*/
/*{*/
	/*char	*str1;*/

	/*str1 = "Hi There";*/
	/*printf("Translated string: %s\n", ft_strmapi(str1, *remap));*/
	/*return (0);*/
/*}*/
