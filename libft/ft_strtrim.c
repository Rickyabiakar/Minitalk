/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:26:26 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:26:30 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	end;

	if (!set || !s1)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	end = ft_strlen(s1);
	while (i < end && ft_strrchr(set, s1[end - 1]))
		end--;
	str = (char *)malloc(end - i + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + i, end - i + 1);
	str[end - i] = '\0';
	return (str);
}
/*
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return (&((char *)s)[i]);
		i--;
	}
	return (NULL);
}

char	*ft_strchr(const char *src, int val)
{
	while (*src != '\0')
	{
		if (*src == (char)val)
			return ((char *)src);
		src++;
	}
	if (val == '\0')
		return ((char *)src);
	else
		return (NULL);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t siz)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = 0;
	while (src[srclen] != '\0')
	{
		srclen++;
	}
	if (siz > 0)
	{
		while (i < siz - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (srclen);
}
*/
/*
int main ()
{
	char	*str1;
	char	*set1;
	char	*res1;
	char	*str2;
	char	*set2;
	char	*res2;
	char	*str3;
	char	*set3;
	char	*res3;
	char	*str4;
	char	*set4;
	char	*res4;
	char	*str5;
	char	*set5;
	char	*res5;

	str1 = "  school 42  ";
	set1 = "  ";
	res1 = ft_strtrim(str1, set1);
	printf("Original: '%s', trimmed: '%s'\n", str1, res1);
	free(res1);
	printf("-------------------------------------------------\n");
	str2 = "xxschool 42xx";
	set2 = "xx";
	res2 = ft_strtrim(str2, set2);
	printf("Original: '%s', trimmed: '%s'\n", str2, res2);
	free(res2);
	printf("-------------------------------------------------\n");
	str3 = "124345school forty-two12345";
	set3 = "12345";
	res3 = ft_strtrim(str3, set3);
	printf("Original: '%s', trimmed: '%s'\n", str3, res3);
	free(res3);
	printf("-------------------------------------------------\n");
	str4 = "abcdef";
	set4 = "xyz";
	res4 = ft_strtrim(str4, set4);
	printf("Original: '%s', trimmed: '%s'\n", str4, res4);
	free(res4);
	printf("-------------------------------------------------\n");
	str5 = "    ";
	set5 = "  ";
	res5 = ft_strtrim(str5, set5);
	printf("Original: '%s', trimmed: '%s'\n", str5, res5);
	free(res5);
	return (0);
}
*/
