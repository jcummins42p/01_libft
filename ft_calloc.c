/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:19:34 by jcummins          #+#    #+#             */
/*   Updated: 2023/10/31 19:58:41 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	if (nmemb >= SIZE_MAX || size >= SIZE_MAX)
		return (NULL);
	total = (nmemb * size);
	if (total >= INT_MAX)
		return (NULL);
	ptr = (void *)malloc(total);
	if (!ptr)
	{
		free (ptr);
		return (NULL);
	}
	ft_memset(ptr, 0, total);
	return (ptr);
}

/*int	main(void)*/
/*{*/
	/*int	*ptr;*/
	/*int	i;*/

	/*i = 0;*/
	/*ptr = (int *)ft_calloc(10, sizeof(int));*/
	/*if (ptr == NULL)*/
	/*{*/
		/*printf("Memory not allocated");*/
		/*return (0);*/
	/*}*/
	/*while (i < 10)*/
	/*{*/
		/*printf("%d ", ptr[i]);*/
		/*i++;*/
	/*}*/
	/*return (0);*/
/*}*/
