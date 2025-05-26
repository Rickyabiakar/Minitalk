/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:26:22 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:26:24 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main ()
{
	const char	*s = "bonjour";
	char	c1 = 'a';
	char	c2 = 'o';
	char	c3 = '\0';
	char	*result1 = ft_strrchr(s, c1);
	char	*result2 = ft_strrchr(s, c2);
	char	*result3 = ft_strrchr(s, c3);

	if (result1 != NULL)
		printf("Test1: look for 'a' in bonjour: %s\n", result1);
	else
		printf("Test1: 'a' not found in bonjour\n");
	if (result2 != NULL)
		printf("Test1: look for 'o' in bonjour: %s\n", result2);
	else
		printf("TEST1: o not found in bonjour\n");
	if (result3 != NULL)
		printf("TEST3: look for null terminator in bonjour: %s\n", result3);
	else
		printf("TEST4: null terminator not found in bonjour \n");
	return (0);


}*/
