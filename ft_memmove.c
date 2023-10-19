/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:28:36 by jcummins          #+#    #+#             */
/*   Updated: 2023/10/19 17:43:40 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*pdest;
	const unsigned char	*psrc;
	unsigned char		*temp;

	i = 0;
	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	temp = (unsigned char *)malloc(n);
	while (i < n)
	{
		temp[i] = psrc[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		pdest[i] = temp[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	src[] = "Hello There";
	char	dest[] = "General Kenobi";

	printf("%s!\n", dest);
	ft_memmove(dest, src + 5, 4);
	printf("%s!\n", dest);
	return (0);
}
