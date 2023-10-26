/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:47:00 by jcummins          #+#    #+#             */
/*   Updated: 2023/10/26 19:30:26 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*curr;

	curr = lst;
	while (curr->next != NULL)
		curr = curr->next;
	return (curr);
}

/*int	main(void)*/
/*{*/
	/*int	content = 4;*/

	/*t_list	*testl = ftlstnew(&content);*/
	/*return (0);*/
/*}*/
