/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:24:14 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:24:16 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
char		*ft_strdup(const char *s);

size_t		ft_strlen(const char *s);
*/
static int	len_n(int n)
{
	int		length;
	long	absolute_n;

	length = 0;
	absolute_n = n;
	if (absolute_n < 0)
	{
		absolute_n = -absolute_n;
		length++;
	}
	while (absolute_n > 0)
	{
		absolute_n = absolute_n / 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*result_str;
	long	absolute_n;
	int		length;

	if (n == 0)
		return (ft_strdup("0"));
	length = len_n(n);
	result_str = malloc(sizeof(char) * (length + 1));
	if (!result_str)
		return (NULL);
	absolute_n = n;
	if (absolute_n < 0)
	{
		result_str[0] = '-';
		absolute_n = -absolute_n;
	}
	result_str[length] = '\0';
	while (absolute_n > 0)
	{
		result_str[--length] = (absolute_n % 10) + '0';
		absolute_n = absolute_n / 10;
	}
	return (result_str);
}
/*
int	main(void)
{
	char	*str1 = ft_itoa(-333);
	char	*str2 = ft_itoa(0);
	char	*str3 = ft_itoa(8);
	char	*str4 = ft_itoa(2147483647);
	char	*str5 = ft_itoa(-2147483648);

	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
	printf("%s\n", str4);
	printf("%s\n", str5);

	free(str1);
	free(str2);
	free(str3);
	free(str4);
	free(str5);

	return (0);
}*/
