/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:26:32 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:26:34 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int main()
{       
        char const *s = "Good Day";
        unsigned int start = 5;
        size_t len = 3;
        char *sub = ft_substr(s, start, len);
        
        if (!sub)
        {       
                printf("memory allocation failed.\n");
                return (1);
        }       
        else
        {
                printf("Substring: %s\n", sub);
        }
        free(sub);
        return (0);
}
*/
