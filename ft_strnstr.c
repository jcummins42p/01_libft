/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:52:24 by jcummins          #+#    #+#             */
/*   Updated: 2023/10/25 18:44:08 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	si;
	size_t	fi;
	size_t	found;

	si = 0;
	fi = 0;
	found = 0;
	while (big[si])
	{
		while ((big[si] == little[fi]) && (big[si]) && (si < len))
		{
			if (fi == 0)
				found = si;
			if (!(little[fi + 1]) && (little[fi] == big[si]))
				return ((char *)(&big[found]));
			si++;
			fi++;
		}
		si -= (fi - 1);
		fi = 0;
	}
	return (0);
}

/*int	main(void)*/
/*{*/
	/*const char	*big = "The quick brown fox jumps over the lazy dog";*/
	/*const char	*little = "T";*/
	/*size_t		len;*/

	/*len = 60;*/
	/*printf("%s", ft_strnstr(big, little, len));*/
	/*return (0);*/
/*}*/
