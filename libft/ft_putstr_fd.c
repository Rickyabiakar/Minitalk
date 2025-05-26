/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:25:22 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:25:23 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	write(fd, s, ft_strlen(s));
}
/*
size_t	ft_strlen(const char *s);

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
*/

/*
void	ft_putstr_fd(char *s, int fd)
{
//	if (!s)
//		return ;
	write(fd, s, ft_strlen(s));
}

int main ()
{
//	char	*str = "hi";
//	ft_putstr_fd(str, 1);
//	ft_putstr_fd(NULL, 1);
//	[1]    1582183 segmentation fault (core dumped)  ./a.out
	return (0);
}*/