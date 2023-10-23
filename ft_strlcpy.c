/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:58:48 by jcummins          #+#    #+#             */
/*   Updated: 2023/10/23 14:08:33 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	if (size == 1)
		dst[i] = '\0';
	while (src[i] && (i < size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}

int	main(void)
{
	char			dest[7] = "ABCDEF\0";
	char			src[7] = "HIJKLMN";
	unsigned int	size;
	unsigned int	retval;

	retval = 0;
	size = 5;
	printf("The original string is %s\n", dest);
	retval = ft_strlcpy(dest, src, size);
	printf("The copied string is %s of length %d\n", dest, retval);
	return (0);
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
