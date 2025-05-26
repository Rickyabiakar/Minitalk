/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:24:02 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:24:04 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*
#include <ctype.h>
#include <stdio.h>

int	main(void)

{

	printf("------------TEST 1--------------\n");
	printf("ft for ('0'): %d\n", ft_isdigit('0') != 0);
	printf("st for ('0'): %d\n", isdigit('0') != 0);

		printf("------------TEST 2--------------\n");
		printf("ft for ('Z'): %d\n", ft_isdigit('Z') != 0);
		printf("st for ('Z'): %d\n", isdigit('Z') != 0);


		printf("------------TEST 3--------------\n");
		printf("ft for ('a'): %d\n", ft_isdigit('a') != 0);
		printf("st for ('a'): %d\n", isdigit('a') != 0);


		printf("------------TEST 4--------------\n");
		printf("ft for ('5'): %d\n", ft_isdigit('5') != 0);
		printf("st for ('5'): %d\n", isdigit('5') != 0);


		printf("------------TEST 1--------------\n");
		printf("ft for ('*'): %d\n", ft_isdigit('*') != 0);
		printf("st for ('*'): %d\n", isdigit('*') != 0);




	return (0);
}*/
