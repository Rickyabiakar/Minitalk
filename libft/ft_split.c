/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:25:26 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:25:27 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	flag;
	int	count;
	int	i;

	count = 0;
	flag = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static char	*ft_make_word(char const *s, char c)
{
	char	*dst;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	dst = (char *)malloc(sizeof(char) * (i + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

static char	**ft_free(char **split, int f)
{
	f--;
	while (f >= 0)
	{
		free(split[f]);
		f--;
	}
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	dst = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!dst)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			dst[i] = ft_make_word(s, c);
			if (dst[i] == NULL)
				return (ft_free(dst, i));
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	dst[i] = NULL;
	return (dst);
}
/*
int main ()
{
	int i = 0;
	char	**result = ft_split("these are my words", ' ');
	while (i < 4)
	{
		printf("word %i: %s\n", i, result[i]);
		i++;
	}
}
*/
