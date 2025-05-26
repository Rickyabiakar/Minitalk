/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:25:30 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:25:32 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
		const char *s = "Fatin";
	char	c1;
	char	c2;
	char	c3;
	char	*result1;
	char	*result2;
	char	*result3;

		c1 = 'a';
		c2 = '\0';
		c3 = 'z';
		result1 = ft_strchr(s, c1);
		result2 = ft_strchr(s, c2);
		result3 = ft_strchr(s, c3);
		printf("TEST1 c = a, %s\n", result1);
		printf("TEST2 c = null terminator, %s\n", result2);
		printf("TEST3 c = z, %s\n", result3);
		return (0);
}
//The strchr function returns a non-const pointer (char *), 
//even if it’s pointing to a const char * (which is why we cast it to char *).
//This is done so the return type matches the function’s signature, 
//but it doesn't mean the content of the string is meant to be modified.
*/
