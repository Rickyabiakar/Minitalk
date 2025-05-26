/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:26:39 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:26:41 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>

int main ()
{
	char ch1 = 'B';
	char ch2 = 'A';
	char ch3 = 'R';
	char ch4 = 'z';

	printf("test with my function: \n");

	printf("Original char: %c, lowercase char: %c.\n", ch1, ft_tolower(ch1));
	printf("Original char: %c, lowercase char: %c.\n", ch2, ft_tolower(ch2));
	printf("Original char: %c, lowercase char: %c.\n", ch3, ft_tolower(ch3));
	printf("Original char: %c, lowercase char: %c.\n", ch4, ft_tolower(ch4));

	printf(" ----------------------------------------------------\n");

	printf("test with the standard function: \n");

	printf("Original char: %c, lowercase char: %c.\n", ch1, tolower(ch1));
        printf("Original char: %c, lowercase char: %c.\n", ch2, tolower(ch2));
        printf("Original char: %c, lowercase char: %c.\n", ch3, tolower(ch3));
        printf("Original char: %c, lowercase char: %c.\n", ch4, tolower(ch4));

	return (0);
}*/
