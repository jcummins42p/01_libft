/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:03:56 by jcummins          #+#    #+#             */
/*   Updated: 2024/05/02 17:41:05 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_whitespace(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	else
		return (0);
}

unsigned int	ft_atoi_hex(const char *hex)
{
	unsigned int	result;
	int				base;
	char			c;
	const char		*ptr;

	result = 0;
	ptr = hex;
	base = 16;
	if (hex[0] == '0' && (hex[1] == 'x' || hex[1] == 'X'))
		ptr += 2;
	while (*ptr != '\0')
	{
		c = *ptr++;
		if (c >= '0' && c <= '9')
			result = result * base + (c - '0');
		else if (c >= 'A' && c <= 'F')
			result = result * base + (c - 'A' + 10);
		else if (c >= 'a' && c <= 'f')
			result = result * base + (c - 'a' + 10);
		else
			return (0);
	}
	return (result);
}

/*int	main(void)*/
/*{*/
	/*const char	*message = "	   f-12343g";*/

	/*printf("String is %s, integer is %d\n", message, ft_atoi(message));*/
	/*return (0);*/
/*}*/
