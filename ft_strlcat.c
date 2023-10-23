/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:48:46 by jcummins          #+#    #+#             */
/*   Updated: 2023/10/23 14:33:32 by jcummins         ###   ########.fr       */
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
	while (i < (size - 1) && src[i])
		dst[tlen++] = src[i++];
	dst[tlen] = '\0';
	return (tlen);
}

int	main(void)
{
	char	*src = "General Kenobi";
	char	dst[40] = "Hello There, ";
	size_t	nb;

	nb = 12;
	printf("The total string length is %ld\n", ft_strlcat(dst, src, nb));
	printf("%s\n", dst);
	return(0);
}
/*
NAME
     strlcpy, strlcat — size-bounded string copying and concatenation

LIBRARY
     Utility functions from BSD systems (libbsd, -lbsd)

DESCRIPTION
     The strlcpy() and strlcat() functions copy and concatenate strings respectively.  They are de‐
     signed to be safer, more consistent, and less error prone replacements for strncpy(3) and
     strncat(3).  Unlike those functions, strlcpy() and strlcat() take the full size of the buffer (not
     just the length) and guarantee to NUL-terminate the result (as long as size is larger than 0 or,
     in the case of strlcat(), as long as there is at least one byte free in dst).  Note that a byte
     for the NUL should be included in size.  Also note that strlcpy() and strlcat() only operate on
     true “C” strings.  This means that for strlcpy() src must be NUL-terminated and for strlcat() both
     src and dst must be NUL-terminated.

     The strlcpy() function copies up to size - 1 characters from the NUL-terminated string src to dst,
     NUL-terminating the result.

     The strlcat() function appends the NUL-terminated string src to the end of dst.  It will append at
     most size - strlen(dst) - 1 bytes, NUL-terminating the result.

RETURN VALUES
     The strlcpy() and strlcat() functions return the total length of the string they tried to create.
     For strlcpy() that means the length of src.  For strlcat() that means the initial length of dst
     plus the length of src.  While this may seem somewhat confusing, it was done to make truncation
     detection simple.

     Note, however, that if strlcat() traverses size characters without finding a NUL, the length of
     the string is considered to be size and the destination string will not be NUL-terminated (since
     there was no space for the NUL).  This keeps strlcat() from running off the end of a string.  In
     practice this should not happen (as it means that either size is incorrect or that dst is not a
     proper “C” string).  The check exists to prevent potential security problems in incorrect code.
*/
