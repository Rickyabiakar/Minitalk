/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:25:03 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:25:05 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			i--;
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		}
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int main ()
{
	char str1[] = "Good morning!";
	char str2[] = "Good morning!";

	printf(" --------TEST1 ft --------\n");
	printf("before ft_memmove: %s\n", str1);
	ft_memmove(str1 + 7, str1, 6);
	printf("after ft_memmove: %s\n", str1);

	printf(" --------TEST2 st --------\n");
        printf("before memmove: %s\n", str2);
        ft_memmove(str1 + 7, str1, 6);
        printf("after memmove: %s\n", str2);

//	printf("------------TEST2 st ----------\n");
//	printf("before memmove: %s\n", str2);
//	memmove(str2 + 7, str2, 6);
//	printf("after memmove: %s\n", str2);

	return (0);
}*/