/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:24:39 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:24:40 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int main()
{
	t_list	*node1 = ft_lstnew("first node");
	t_list	*node2 = ft_lstnew("second node");
	t_list	*node3 = ft_lstnew("third node");

	//link the nodes to form a list:
	node1->next = node2;
	node2->next = node3;

	//find and print the lastnode:
	t_list *last_node = ft_lstlast(node1);
	
	if(last_node)
		printf("last node content: %s\n", (char *)last_node->content);
	else
		printf("the list is empty\n");

	//free the nodes:
	free(node1);
	free(node2);
	free(node3);

	return (0);
}*/
