/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:26:13 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:26:15 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	j;

	j = 0;
	if (n == 0)
		return (0);
	while (j < n && (s1[j] || s2[j]))
	{
		if (s1[j] != s2[j])
			return ((unsigned char)s1[j] - (unsigned char)s2[j]);
		j++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main ()
{
	const char *s1 = "hi";
	const char *s2 = "bye";

	size_t n = 2;

	printf("comparing first %zu characters of %s and %s: \n", n, s1, s2);
	printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, n));
	printf("strncmp: %d\n", strncmp(s1, s2, n));

	return (0);
}*/
