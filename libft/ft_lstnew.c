/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:24:43 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:24:44 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
int main ()
{
	char	*data = "a string of chars";
	t_list	*node = ft_lstnew((void *)data);

	if(!node)
	{
		printf("memory allocation for node, failed\n");
		return(1);
	}
	printf("Node content: %s\n", (char *)node->content);
	printf("Node next: %p\n", node->next);

	free(node);

	return (0);
}*/
