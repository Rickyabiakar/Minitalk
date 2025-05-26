/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:24:18 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:24:20 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst)
	{
		if (*lst)
		{
			last = ft_lstlast(*lst);
			last->next = new;
		}
		else
			*lst = new;
	}
}
/*
int main()
{
	t_list	*node1 = ft_lstnew("first node");
	t_list	*node2 = ft_lstnew("second node");
	t_list	*node3 = ft_lstnew("third node");

	//create a head for the list:
	
	t_list *head = node1;

	//add nodes to the back of the list:
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);

	//print the list
	t_list *current = head;
	while(current)
	{
		printf("node content: %s\n", (char *)current->content);
		current = current->next;
	}

	//free the nodes:
	while (head)
	{
		t_list *temp = head;
		head = head->next;
		free(temp);
	}
	return (0);
}
*/
