/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:24:27 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:24:29 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}
/*
void	delete_content(void *content)
{
	printf("deleting content: %s\n",(char *)content);
}

int main()
{
	t_list *node1 = ft_lstnew("first node");
	t_list *node2 = ft_lstnew("second node");
	t_list *node3 = ft_lstnew("third node");

	node1->next = node2;
	node2->next = node3;

	t_list *head = node1;

	ft_lstclear(&head, delete_content);
	if(!head)
		printf("list is clear and head is NULL\n");
	return (0);
}*/
