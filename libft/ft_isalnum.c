/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:23:49 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:23:51 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
			|| (c >= '0' && c <= '9')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{

	printf("------------TEST1-------------\n");
	printf("ft for 'A': %d\n", ft_isalnum('A') != 0);
	printf("st for 'A': %d\n", isalnum('A') != 0);

        printf("------------TEST2-------------\n");
        printf("ft for 'n': %d\n", ft_isalnum('n') != 0);
        printf("st for 'n': %d\n", isalnum('n') != 0);


        printf("------------TEST3-------------\n");
        printf("ft for '!': %d\n", ft_isalnum('!') != 0);
        printf("st for '!': %d\n", isalnum('!') != 0);

        printf("------------TEST4-------------\n");
        printf("ft for '#': %d\n", ft_isalnum('#') != 0);
        printf("st for '#': %d\n", isalnum('#') != 0);


        printf("------------TEST5-------------\n");
        printf("ft for '7': %d\n", ft_isalnum('7') != 0);
        printf("st for '7': %d\n", isalnum('7') != 0);


	return (0);
}
*/
