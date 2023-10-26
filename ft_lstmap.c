/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:04:30 by jcummins          #+#    #+#             */
/*   Updated: 2023/10/26 17:07:33 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{

	return ();
}

// Iterates the list 'lst' and applies the function 'f' on the content of each node.
// Creates a new list resulting of the successive applications of the function 'f'.
// The 'del' function is used to delete the content of a node if needed.
