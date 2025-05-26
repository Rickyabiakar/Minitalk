/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:24:23 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:24:25 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
int main ()
{
	t_list	*head = ft_lstnew("node 2");
	t_list *node = ft_lstnew("node 1");
	
	printf("head content before lstadd_front\n");

	printf("head content: %s\n", (char *)head->content);
	//add node to the front
	ft_lstadd_front(&head, node);
	//print the ontent of the node 1 and 2 to verify: 
	printf("head content after the function:\n");
	printf("head content: %s\n",(char *)head->content);
	printf("next content: %s\n", (char *)head->next->content);

	free(head->next);
	free(node);

	return(0);
} 
*/
