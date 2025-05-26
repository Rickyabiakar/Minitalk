/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:23:30 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:23:34 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
#include <string.h>

int main ()
{
	char str1[] = "Hello, World!";
	char str2[] = "Hello, World!";
	size_t len = 13;

	printf("Before ft_bzero: %s\n", str1);
	ft_bzero(str1, 5);
	printf("After ft_bzero: \n");
	size_t  i = 0;
	while (i < len)
	{
		if (str1[i] == '\0')
			printf(".");
		else
			printf("%c", str1[i]);
		i++;
	}
	printf("\n");

	printf("Before st_bzero: %s\n", str2);
	bzero(str2, 5);
	printf("After st_bzero: \n");
	i = 0;
	while (i < len)
	{
		if (str2[i] == '\0')
			printf(".");
		else
			printf("%c", str2[i]);
		i++;
	}
	printf("\n");

	return (0);
}*/
