/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:48:46 by jcummins          #+#    #+#             */
/*   Updated: 2023/10/30 18:55:17 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	tlen;

	i = 0;
	tlen = 0;
	while (dst[tlen])
		tlen++;
	while (tlen < (size - 1) && src[i])
		dst[tlen++] = src[i++];
	dst[tlen] = '\0';
	return (tlen);
}

/*int	main(void)*/
/*{*/
	/*char	*src = "General Kenobi";*/
	/*char	dst[40] = "Hello There, ";*/
	/*size_t	nb;*/

	/*nb = 12;*/
	/*printf("The total string length is %ld\n", ft_strlcat(dst, src, nb));*/
	/*printf("%s\n", dst);*/
	/*return(0);*/
/*}*/
