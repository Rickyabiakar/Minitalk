/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:26:00 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:26:02 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t siz)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = 0;
	while (src[srclen] != '\0')
	{
		srclen++;
	}
	if (siz > 0)
	{
		while (i < siz - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (srclen);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{

	char dst[10];
	const char *src = "ABCD";
	size_t copied = ft_strlcpy(dst, src, sizeof(dst));
	
	printf("copied string: %s\n", dst);
	printf("length of src: %zu\n", copied);

	return (0);
}
	
	const char *src = "ABCDE,f";
	char buffer1[10]; //for ft
	char buffer2[5]; //for src > siz
// 	char buffer2[10]; // for st

	//testing ft
	size_t count1 = ft_strlcpy (buffer1, src, sizeof(buffer1));
	size_t count2 = ft_strlcpy (buffer2, src, sizeof(buffer2));
	
	//testing st
//	size_t count3 = strlcpy (buffer3, src, sizeof(buffer3));

	//print the results:
	printf("----------------TEST1------------------\n");
	printf("Source: %s\n", src);

	printf("ft Destination: %s\n", buffer1);
	printf("ft returned length: %zu\n", count1);

	printf("----------------TEST2------------------\n");
	printf("Source: %s\n", src);
	printf("ft Destination: %s\n", buffer2);
        printf("ft returned length: %zu\n", count2);



//	printf("st Destination: %s\n", buffer3);
//	printf("st returned length: %zu\n", count3);


	return (0);
}*/
