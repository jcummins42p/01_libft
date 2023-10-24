/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:54:17 by jcummins          #+#    #+#             */
/*   Updated: 2023/10/23 16:54:40 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	while (i >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
		i--;
	}
	return ("NULL");
}

int	main(void)
{
	const char		*str = "The quick brown fox jumps over the lazy dog";
	unsigned char	c = 'T';

	printf("found the char %c at \"%s\" in the string.\n", c, ft_strrchr(str, c));
	return (0);
}
/*
DESCRIPTION
       The strchr() function returns a pointer to the first occurrence of the character c in the string
       s.

       The strrchr() function returns a pointer to the last occurrence of the character c in the string
       s.

       The  strchrnul() function is like strchr() except that if c is not found in s, then it returns a
       pointer to the null byte at the end of s, rather than NULL.

       Here "character" means "byte"; these functions do not work with wide or multibyte characters.

RETURN VALUE
       The strchr() and strrchr() functions return a pointer to the matched character or  NULL  if  the
       character  is not found.  The terminating null byte is considered part of the string, so that if
       c is specified as '\0', these functions return a pointer to the terminator.

       The strchrnul() function returns a pointer to the matched character, or a pointer  to  the  null
       byte at the end of s (i.e., s+strlen(s)) if the character is not found.
*/
