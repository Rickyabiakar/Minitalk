/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:25:42 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:25:44 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static void	my_function(unsigned int i, char *c)
{
	(void)i;
	*c = *c + 1;
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
int	main(void)
{
	char	res1[] = "abc";
	char	res2[] = "123";

	ft_striteri(res1, my_fun);
	ft_striteri(res2, my_fun);
	printf("abc after my_fun is %s\n", res1);
	printf("123 after my_fun is %s\n", res2);
	return (0);
}
*/
