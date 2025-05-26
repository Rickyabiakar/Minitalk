/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:17:48 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:17:55 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	i;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((nptr[i] == ' ') || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (ft_isdigit(nptr[i]))
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	const char	*test1 = "123";
	const char	*test2 = "-123";
	const char	*test3 = "  667";
	const char	*test4 = "998bar";
	const char	*test5 = "bar998";
	const char	*test6 = "+42";
	const char	*test7 = "-0";
	const char	*test8 = "0";
	const char	*test9 = "2147483647";
	const char	*test10 = "-2147483648";
	const char	*test11 = "   +00556";
	const char	*test12 = "  -00124";
	const char	*test13 = "";
	const char	*test14 = " \t\n\r\f\v";
//	const char	*test15 = NULL;
	const char	*test16 = "2147483649";
	const char	*test17 = "-2147483650";

	printf("------------TEST1-------------\n");
	printf("ft: %d\n", ft_atoi(test1));
	printf("st: %d\n", atoi(test1));
	printf("------------TEST2--------------\n");
	printf("ft: %d\n", ft_atoi(test2));
	printf("st: %d\n", atoi(test2));
	printf("------------TEST3--------------\n");
	printf("ft: %d\n", ft_atoi(test3));
	printf("st: %d\n", atoi(test3));
	printf("------------TEST4--------------\n");
	printf("ft: %d\n", ft_atoi(test4));
	printf("st: %d\n", atoi(test4));
	printf("------------TEST5--------------\n");
	printf("ft: %d\n", ft_atoi(test5));
	printf("st: %d\n", atoi(test5));
	printf("------------TEST6--------------\n");
	printf("ft: %d\n", ft_atoi(test6));
	printf("st: %d\n", atoi(test6));
	printf("------------TEST7--------------\n");
	printf("ft: %d\n", ft_atoi(test7));
	printf("st: %d\n", atoi(test7));
	printf("------------TEST8--------------\n");
	printf("ft: %d\n", ft_atoi(test8));
	printf("st: %d\n", atoi(test8));
	printf("------------TEST9--------------\n");
	printf("ft: %d\n", ft_atoi(test9));
	printf("st: %d\n", atoi(test9));
	printf("------------TEST10--------------\n");
	printf("ft: %d\n", ft_atoi(test10));
	printf("st: %d\n", atoi(test10));
	printf("------------TEST11--------------\n");
	printf("ft: %d\n", ft_atoi(test11));
	printf("st: %d\n", atoi(test11));
	printf("------------TEST12--------------\n");
	printf("ft: %d\n", ft_atoi(test12));
	printf("st: %d\n", atoi(test12));
	printf("------------TEST13--------------\n");
	printf("ft: %d\n", ft_atoi(test13));
	printf("st: %d\n", atoi(test13));
	printf("------------TEST14--------------\n");
	printf("ft: %d\n", ft_atoi(test14));
	printf("st: %d\n", atoi(test14));
//	printf("------------TEST15--------------\n");
//	printf("ft: %d\n", ft_atoi(test15));
//	printf("st: %d\n", atoi(test15));
	printf("------------TEST16--------------\n");
        printf("ft: %d\n", ft_atoi(test16));
        printf("st: %d\n", atoi(test16));
        printf("------------TEST17--------------\n");
        printf("ft: %d\n", ft_atoi(test17));
        printf("st: %d\n", atoi(test17));

	return (0);
}
*/
