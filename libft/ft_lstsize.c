/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:24:47 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:24:49 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*
int main()
{
	t_list	*node1 = ft_lstnew("first node");
	t_list	*node2 = ft_lstnew("second node");
	t_list	*node3 = ft_lstnew("third node");

	//link nodes to form a list: 
	node1->next = node2;
	node2->next = node3;

	//test ft_lstsize:
	int size = ft_lstsize(node1);
	printf("list size: %d\n",size);

	//free the nodes:
	free(node1);
	free(node2);
	free(node3);

	return (0);
}*/
