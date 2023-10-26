/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:56:11 by jcummins          #+#    #+#             */
/*   Updated: 2023/10/26 19:27:20 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst && new)
		ft_lstlast(*lst)->next = new;
}

int	main(void)
{
	int		content1 = 4;
	int		content2 = 2;
	int		*vptr1;
	int		*vptr2;
	t_list	*root;

	root = ft_lstnew(&content1);
	vptr1 = (int *)(root->content);
	printf("%d, %d, %d\n", *vptr1, *vptr1, *vptr1);
	ft_lstadd_back(&root, ft_lstnew(&content2));
	vptr1 = (int *)(root->content);
	vptr2 = (int *)(root->next->content);
	printf("%d, %d, %d\n", *vptr1, *vptr2, *vptr1);
	return (0);
}
