/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:38:29 by jcummins          #+#    #+#             */
/*   Updated: 2023/10/25 18:51:42 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	const char		*temp_s1;
	const char		*temp_s2;

	i = 0;
	temp_s1 = s1;
	temp_s2 = s2;
	while (temp_s1[i] == temp_s2[i] && (i < n))
		i++;
	if (i == n)
		return (0);
	return (temp_s1[i] - temp_s2[i]);
}

/*int	main(void)*/
/*{*/
	/*const void	*s1;*/
	/*const void	*s2;*/
	/*size_t		n;*/

	/**s1 = "Hello";*/
	/**s2 = "H842";*/
	/*n = 5;*/
	/*if (!ft_memcmp(s1, s2, n))*/
		/*printf("The strings up to index %ld are identical", n);*/
	/*else if (ft_memcmp(s1, s2, n) > 0)*/
		/*printf("s1 is greater\n");*/
	/*else if (ft_memcmp(s1, s2, n) < 0)*/
		/*printf("s2 is greater\n");*/
	/*return (0);*/
/*}*/
