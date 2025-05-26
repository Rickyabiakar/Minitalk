/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:26:04 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:26:06 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	const char	*start;

	start = s;
	while (*s)
		s++;
	return (s - start);
}
/*
#include <string.h>
#include <stdio.h>

int main ()
{
	const char *test1 = "ABCDE";
	const char *test2 = "";
	const char *test3 = "24";
	const char *test4 = "Hello World!";

	printf("-------------TEST1------------\n");
	printf("ft for (ABCDE): %zu\n", ft_strlen(test1));
	printf("st for (ABCDE): %zu\n", strlen(test1));

	printf("-------------TEST2------------\n");
        printf("ft for (""): %zu\n", ft_strlen(test2));
        printf("st for (""): %zu\n", strlen(test2));


        printf("-------------TEST3------------\n");
        printf("ft for (42): %zu\n", ft_strlen(test3));
        printf("st for (42): %zu\n", strlen(test3));

        printf("-------------TEST4------------\n");
        printf("ft for (Hello World!): %zu\n", ft_strlen(test4));
        printf("st for (Hello World!): %zu\n", strlen(test4));
	

	return (0);
}*/
