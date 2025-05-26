/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:26:09 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:26:11 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
*/
/*
static char	my_fun(unsigned int i, char c)
{
	(void)i;
	return (c + 2);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	res = malloc((ft_strlen(s) + 1) * (sizeof(char)));
	if (!res)
		return (NULL);
	i = 0;
	while (i < (ft_strlen(s)))
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
int	main(void)
{
	char	*res1;
	char	*res2;

	res1 = ft_strmapi("abc", my_fun);
	res2 = ft_strmapi("123", my_fun);
	if (res1)
	{
		printf("abc after my_fun: %s\n", res1);
		free(res1);
	}
	else
		printf("allocation failed\n");
	if (res2)
	{
		printf("123 after my_fun: %s\n", res2);
		free(res2);
	}
	else
		printf("allocation failed\n");
	return (0);
}
*/