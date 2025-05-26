/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:25:46 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:43:47 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	res = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * (sizeof(char)));
	if (!res)
		return (NULL);
	while (s1[i])
	{
		res[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2[i])
	{
		res[j] = s2[i];
		j++;
		i++;
	}
	res[j] = '\0';
	return (res);
}
/*
int	main(void)
{
	char	s1[] = "good";
	char	s2[] = "bye";
	char	*res;

	res = ft_strjoin(s1, s2);
	if (res)
		printf(" joining %s and %s is: %s\n", s1, s2, res);
	else
		printf("Memory allocation failed\n");
	return (0);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char *res; // Pointer to hold the concatenated result
    int i;     // Index for iterating over s1
    int j;     // Index for iterating over the result (res) and s2

    i = 0;
    j = 0;

    // Allocate memory for the result string. The total size is the length of s1
    // plus the length of s2, and +1 for the null terminator.
    res = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
    if (!res) // If malloc fails, return NULL.
        return (NULL);

    // Copy the characters from s1 into res
    while (s1[i])
    {
        res[j] = s1[i];
        j++;
        i++;
    }

    // Reset i to 0, and copy the characters from s2 into res
    i = 0;
    while (s2[i])
    {
        res[j] = s2[i];
        j++;
        i++;
    }

    // Null-terminate the result string
    res[j] = '\0';

    // Return the concatenated string
    return (res);
}
*/
