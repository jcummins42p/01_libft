/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:56:25 by jcummins          #+#    #+#             */
/*   Updated: 2023/11/01 14:52:54 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	sub = (char *)malloc((len) * sizeof(char));
	while (i < len && s[start])
	{
		sub[i++] = s[start++];
	}
	return (sub);
}

/*int	main(void)*/
/*{*/
	/*char	*str;*/

	/*str = "Test String";*/
	/*printf("The string is: \"%s\"\n", str);*/
	/*printf("The string is: \"%s\"\n", ft_substr(str, 9, 1));*/
	/*return (0);*/
/*}*/
