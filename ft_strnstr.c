/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:52:24 by jcummins          #+#    #+#             */
/*   Updated: 2023/10/23 18:58:08 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

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

int	main(void)
{
	const char	*big = "The quick brown fox jumps over the lazy dog";
	const char	*little = "T";
	size_t		len = 60;

	printf("%s", ft_strnstr(big, little, len));

	return (0);
}
/*DESCRIPTION*/
	/*The strnstr() function locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched. Characters that appear after a '\0' character are not searched. Since the strnstr() function is a FreeBSD specific API, it should only e used when portability is not a concern.*/

/*RETURN VALUES*/
/*If little is an empty string, big is returned; if little occurs nowhere in big, NULL is returned; otherwise a pointer to the first character of the first occurrence of little is returned.*/
