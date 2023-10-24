/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:17:08 by jcummins          #+#    #+#             */
/*   Updated: 2023/10/23 17:36:48 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*temps;

	temps = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (temps[i] == (unsigned char)c)
			return ((char *)(&temps[i]));
		i++;
	}
	return (NULL);
}

int	main(void)
{
	const char		*str = "The quick :@ brown fox :P jumps over :0 the lazy :| dog!";
	unsigned char	c = 'z';
	size_t			n = 60;

	printf("Found the char %c at \"%s\" in the string.\n", c, ft_memchr(str, c, n));
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
