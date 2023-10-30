/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:01:38 by jcummins          #+#    #+#             */
/*   Updated: 2023/10/30 17:49:37 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	func(void *content)
{
	int	*x;

	x = (int *)content;
	*x = *x + 2;
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*curr;
	int		*x;

	*x = 2;
	curr = lst;
	while (curr != NULL)
	{
		f(x);
		curr = curr->next;
	}
}

int	main(void)
{
	t_list	*list;
	int		*proxy;

	list->content = (int *)4;
	list->next = NULL;
	*proxy = list->content;
	printf("The content of the list is %d", *proxy);
}
