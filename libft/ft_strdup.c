/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:25:37 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:25:39 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
size_t	ft_strlen(const char *s);
*/
char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;

	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	const char *original = "testing fun";
	char *duplicated = ft_strdup(original);

	if (!duplicated)
	{
		printf("memory allocation falied ❌\n");
		return (1);
	}

	printf("Original: %s\n", original);
	printf("Duplicated: %s\n", duplicated);

	free(duplicated);

	return (0);
}*/
