/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:40:46 by jcummins          #+#    #+#             */
/*   Updated: 2023/10/25 16:50:29 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int	main(void)
{
	unsigned char	c;

	c = 'h';
	if (ft_isalpha(c))
	{
		printf("The char is alphabetic");
	}
	else if (!ft_isalpha(c))
	{
		printf("The char is not alphabetic");
	}
	return (0);
}
