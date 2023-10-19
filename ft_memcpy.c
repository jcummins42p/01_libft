/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:28:36 by jcummins          #+#    #+#             */
/*   Updated: 2023/10/19 16:47:57 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*pdest;
	const unsigned char	*psrc;

	i = 0;
	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	while (i < n && pdest[i])
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	src[] = "Hello There";
	char	dest[] = "General Kenobi";

	printf("%s, %s!\n", src, dest);
	ft_memcpy(dest, src, 10);
	printf("%s, %s!\n", src, dest);
	return (0);
}
