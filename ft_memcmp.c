/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:38:29 by jcummins          #+#    #+#             */
/*   Updated: 2023/10/23 17:45:15 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

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

int	main(void)
{
	const void	*s1 = "Hello";
	const void	*s2 = "H842";
	size_t		n = 5;

	if (!ft_memcmp(s1, s2, n))
		printf("The strings up to index %ld are identical", n);
	else if (ft_memcmp(s1, s2, n) > 0)
		printf("s1 is greater\n");
	else if (ft_memcmp(s1, s2, n) < 0)
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
