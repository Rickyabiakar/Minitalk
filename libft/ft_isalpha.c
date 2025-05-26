/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:23:53 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:23:56 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int main ()
{
        printf("----------TEST 1-----------\n");
        printf("ft for 'B': %d\n", ft_isalpha('B') != 0);
        printf(" st for 'B': %d\n", isalpha('B') != 0);


        printf("-----------TEST 2----------\n");
        printf("ft for 'a': %d\n", ft_isalpha('a') != 0);
        printf("st for 'a': %d\n", isalpha('a') != 0);


        printf("----------TEST 3-----------\n");
        printf("ft for '9': %d\n", ft_isalpha('9') != 0);
        printf(" st for '9': %d\n", isalpha('9') != 0);


        printf("-----------TEST 4----------\n");
        printf("ft for '!': %d\n", ft_isalpha('!') != 0);
        printf("st for '!': %d\n", isalpha('!') != 0);


        printf("----------TEST 5------------\n");
        printf("ft for '*': %d\n", ft_isalpha('*') != 0);
        printf("st for '*': %d\n", isalpha('*') != 0);

        return (0);
}*/
