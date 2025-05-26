/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:25:50 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:43:36 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	if (siz <= dstlen)
		return (srclen + siz);
	while (src[i] != '\0' && dstlen + i < siz - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (srclen + dstlen);
}
/*
// siz is the total size of dst buffer
//while dstlen is the initial length of dst

int main ()
{
        char dst[] = "ABCD";
        const char *src = "EFG";
        size_t copied1 = ft_strlcat(dst, src, sizeof(dst));
        size_t copied2 = ft_strlcat(dst, src, sizeof(dst));
        size_t copied3 = ft_strlcat(dst, src, sizeof(dst));

        printf("%zu\n", copied1);
        printf("%zu\n", copied2);
        printf("%zu\n", copied3);

        return (0);
}

#include <stdio.h>

int main ()
{
	char dst[] = "good";
	printf("TEST1 siz = 3: %zu\n", ft_strlcat(dst, "morning", 3));
	printf("TEST2 siz = 7: %zu\n", ft_strlcat(dst, "morning", 7));

	return (0);
}*/
