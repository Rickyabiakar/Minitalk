/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:26:43 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:26:45 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>

int main ()
{
	char ch1 = 'b';
	char ch2 = 'a';
	char ch3 = 'r';
	char ch4 = 'Z';

	printf("test with my function:\n");

	printf("Original char: %c, uppercase char: %c.\n", ch1, ft_toupper(ch1));
	printf("Original char: %c, uppercase char: %c.\n", ch2, ft_toupper(ch2));
	printf("Original char: %c, uppercase char: %c.\n", ch3, ft_toupper(ch3));
	printf("Original char: %c, uppercase char: %c.\n", ch4, ft_toupper(ch4));

	printf(" ------------------------------------\n");

	printf("test with standard toupper:\n");

	printf("Original char: %c, uppercase char: %c.\n", ch1, toupper(ch1));
        printf("Original char: %c, uppercase char: %c.\n", ch2, toupper(ch2));
        printf("Original char: %c, uppercase char: %c.\n", ch3, toupper(ch3));
        printf("Original char: %c, uppercase char: %c.\n", ch4, toupper(ch4));

	return (0);
}*/
