/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:25:00 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:25:01 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmpdest;
	unsigned char	*tmpsrc;

	tmpdest = (unsigned char *)dest;
	tmpsrc = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	while (n--)
		*(tmpdest++) = *(tmpsrc++);
	return (dest);
}
/*
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
*/
/*
#include <stdio.h>
#include <string.h>

int main ()
{
	char src[] = "Hello, world!";
	char dst1[15];
	char dst2[15];

	printf("--------TEST ft---------\n");
	printf("Source: %s\n", src);
	printf("After ft: %s\n", (char *)ft_memcpy(dst1, src, 13));

	printf("---------TEST st----------\n");
	printf("Source: %s\n", src);
	printf("After st: %s\n", (char *)memcpy(dst2, src, 13));

	return (0);
}*/
