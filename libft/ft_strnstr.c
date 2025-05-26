/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:26:18 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:26:20 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;

	l = 0;
	b = 0;
	if (little [0] == 0)
		return ((char *)big);
	while (big[b] != '\0' && b < len)
	{
		while (big[b + l] == little[l] && big[b + l] && b + l < len)
		{
			l++;
			if (little[l] == '\0')
				return ((char *)(big + b));
		}
		b++;
		l = 0;
	}
	return (NULL);
}
/*
int	main()
{
	const char *big = "New Day";
	const char *little = "Day";
	size_t len = 10;

	char *found = ft_strnstr(big, little, len);
	if (found)
		printf("%s\n", found);
	else
		printf("Substring not found.\n");
	return (0);
}*/
