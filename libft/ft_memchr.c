/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:24:51 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:24:53 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
		{
			return ((void *)(ptr + i));
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main ()
{
	char str[] = "Good morning";
	char *result1;
	char *result2;

	printf("-----str = Good morning-----\n");
	printf("----------TEST1 ft---------\n");
	result1 = ft_memchr(str, 'd', 13);
	if (result1 != NULL)
		printf("Found 'd' at position: %ld\n", result1 - str);
	else
		printf("'d' not found.\n");

	printf("------------TEST2 st----------\n");
	result2 = memchr(str, 'u', 13);
	if (result2 != NULL)
		printf("Found 'u' at positon: %ld\n", result2 - str);
	else
		printf(" 'u' not found.\n");



	return (0);
}*/
