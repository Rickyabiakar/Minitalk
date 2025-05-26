/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:24:06 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:24:08 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)

{
	printf("---------------TEST1-------------\n");
	printf("ft for (20): %d\n", ft_isprint(20) !=0 );
	printf("st for (20): %d\n", isprint(20) != 0);

		printf("---------------TEST2-------------\n");
		printf("ft for (0): %d\n", ft_isprint(0) != 0);
		printf("st for (0): %d\n", isprint(0) != 0);

		printf("---------------TEST3-------------\n");
		printf("ft for (33): %d\n", ft_isprint(33) != 0);
		printf("st for (33): %d\n", isprint(33) != 0);

		printf("---------------TEST4-------------\n");
		printf("ft for (126): %d\n", ft_isprint(126) != 0);
		printf("st for (126): %d\n", isprint(126) != 0);

		printf("---------------TEST5-------------\n");
		printf("ft for (128): %d\n", ft_isprint(128) != 0);
		printf("st for (128): %d\n", isprint(128) != 0);


	return (0);
}*/
