/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:48:46 by jcummins          #+#    #+#             */
/*   Updated: 2023/10/31 18:08:57 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	slen;
	size_t	dlen;
	size_t	ret;
	size_t	si;

	si = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	ret = slen;
	if (!dst || size == 0)
		return (ret);
	ret = dlen;
	if (size < dlen)
		return (size);
	if (size > 0 && dlen < (size - 1))
	{
		while (dlen < (size - 1) && src[si])
			dst[dlen++] = src[si++];
		dst[dlen++] = '\0';
	}
	return (ret + ft_strlen(src));
}

/*int	main(void)*/
/*{*/
	/*char dst[30];*/
	/*char *src = (char *)"AAAAAAAAA";*/
	/*ft_memset(dst, 0, 30);*/
	/*dst[0] = 'B';*/

	/*ft_memset(dst, 'B', 4);*/
	/*printf("Return Value is %d\n", (int)ft_strlcat(dst, src, 3));*/
	/*printf("%s\n", dst);*/
/*// 4*/
	/*printf("Return Value is %d\n", (int)ft_strlcat(dst, src, 6));*/
	/*printf("%s\n", dst);*/
/*//5*/
	/*ft_memset(dst, 'C', 5);*/
	/*printf("Return Value is %d\n", (int)ft_strlcat(dst, src, -1));*/
	/*printf("%s\n", dst);*/
/*//6*/
	/*ft_strlcat(dst, src, 0);*/
	/*printf("%s\n", dst);*/
	/*ft_strlcat(dst, src, 0);*/
	/*printf("%s\n", dst);*/
	/*ft_strlcat(dst, src, 0);*/
	/*printf("%s\n", dst);*/
	/*ft_strlcat(dst, src, 0);*/
	/*printf("%s\n", dst);*/
	/*ft_strlcat(dst, src, 0);*/
	/*printf("%s\n", dst);*/
	/*ft_strlcat(dst, src, 0);*/
	/*printf("%s\n", dst);*/
	/*ft_strlcat(dst, src, 0);*/
	/*printf("%s\n", dst);*/
	/*return(0);*/
/*}*/
