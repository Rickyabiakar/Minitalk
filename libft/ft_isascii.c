/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:23:58 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:24:00 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int main()

{

    printf("---------------TEST1---------------\n");
    printf("ft for ('A'): %d\n", ft_isascii('A') != 0);
    printf("st for ('A'): %d\n", isascii('A') != 0);

    printf("---------------TEST2---------------\n");
    printf("ft for ('a'): %d\n", ft_isascii('a') != 0);
    printf("st for ('a'): %d\n", isascii('a') != 0);

    printf("---------------TEST3---------------\n");
    printf("ft for ('!'): %d\n", ft_isascii('!') != 0);
    printf("st for ('!'): %d\n", isascii('!') != 0);

    printf("---------------TEST4---------------\n");
    printf("ft for (127): %d\n", ft_isascii(127) != 0);
    printf("st for (127): %d\n", isascii(127) != 0);


    printf("---------------TEST5---------------\n");
    printf("ft for (128): %d\n", ft_isascii(128) != 0);
    printf("st for (128): %d\n", isascii(128) != 0);


       return 0;
}*/
