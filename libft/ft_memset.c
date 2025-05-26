/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:25:07 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:25:08 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)s;
	while (n > 0)
	{
		*temp = (unsigned char)c;
		temp++;
		n--;
	}
	return (s);
}
/*
#include <stdio.h>
#include <string.h>

int main ()
{
	char buffer1[20] = "Hello, world!";
	char buffer2[20] = "Hello, world!";

	printf("---------TEST1----------\n");
	printf("Filling with X:\n");
	printf("ft: %s\n", (char *)ft_memset(buffer1, 'X', 5));
	printf("st: %s\n", (char *)memset(buffer2, 'X', 5));
	printf("\n");

	printf("---------TEST2----------\n");
        printf("Filling with '\\0' null byte:\n");
        printf("ft: \"%s\"\n", (char *)ft_memset(buffer1, '\0', 6));
        printf("st: \"%s\"\n", (char *)memset(buffer2, '\0', 6));
	printf("\n");

	printf("---------TEST3----------\n");
        printf("Filling an empty buffer:\n");
	char empty[10] = {0};

        printf("ft filled empty: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%c", ((char *)ft_memset(empty, 'A', 10))[i]);
	}
	printf("\n");

	printf("---------TEST4----------\n");
        printf("Filling zero bytes:\n");
        printf("ft: %s\n", (char *)ft_memset(buffer1, 'Z', 0));
       // printf("st: %s\n", (char *)memset(buffer2, 'X', 5));


	return (0);
}*/
