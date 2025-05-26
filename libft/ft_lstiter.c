/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:24:35 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:24:36 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void	print_content(void *content)
{
	printf("node content: %s\n",(char *)content);
}

int main()
{
	t_list	*node1 = ft_lstnew("first node");
	t_list	*node2 = ft_lstnew("second node");
	t_list	*node3 = ft_lstnew("third node");

	node1->next = node2;
	node2->next = node3;

	ft_lstiter(node1, print_content);

	free(node1);
	free(node2);
	free(node3);

	return (0);
}*/
