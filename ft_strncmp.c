/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:14:28 by jcummins          #+#    #+#             */
/*   Updated: 2023/10/23 17:14:46 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (i < n))
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

int	main(void)
{
	const char	*s1 = "Hello";
	const char	*s2 = "H842";
	size_t		n = 5;

	if (!ft_strncmp(s1, s2, n))
		printf("The strings up to index %ld are identical", n);
	else if (ft_strncmp(s1, s2, n) > 0)
		printf("s1 is greater\n");
	else if (ft_strncmp(s1, s2, n) < 0)
		printf("s2 is greater\n");
	return (0);
}
/*DESCRIPTION
       The  strcmp() function compares the two strings s1 and s2.  The locale is not taken into account
       (for a locale-aware comparison, see strcoll(3)).  The comparison is done using unsigned  charac‐
       ters.

       strcmp() returns an integer indicating the result of the comparison, as follows:

       • 0, if the s1 and s2 are equal;

       • a negative value if s1 is less than s2;

       • a positive value if s1 is greater than s2.

       The strncmp() function is similar, except it compares only the first (at most) n bytes of s1 and
       s2.
*/
