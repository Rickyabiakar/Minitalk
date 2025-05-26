/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:24:55 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:24:57 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main ()
{
	char str1[] = "testing fun";
	char str2[] = "testing fun";
	char str3[] = "function";
	size_t n = 2;

	printf("---------------TEST1--------------\n");
	printf("ft_memcmp: %d\n", ft_memcmp(str1, str3, n));
	printf("memcmp: %d\n", memcmp(str1, str3, n));

	printf("---------------TEST2--------------\n");
        printf("ft_memcmp: %d\n", ft_memcmp(str1, str2, n));
        printf("memcmp: %d\n", memcmp(str1, str2, n));

	printf("---------------TEST3--------------\n");
        printf("ft_memcmp: %d\n", ft_memcmp(str2, str3, n));
        printf("memcmp: %d\n", memcmp(str2, str3, n));



	return (0);
}*/
