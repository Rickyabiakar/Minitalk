/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:24:31 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:24:33 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
/*
void	delete_function(void *content)
{
	printf("deleting content: %s\n",(char *)content);
}

int main ()
{
	t_list *node = ft_lstnew("node one");

	printf("node content before delete: %s\n", (char *)node->content);

	ft_lstdelone(node, delete_function);

	printf("content is deleted and memory is freed");
	

	return (0);
}*/
