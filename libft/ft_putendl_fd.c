/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:25:14 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:25:16 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	f;

	if (fd != -1 && s != NULL)
	{
		f = '\n';
		while (*s)
		{
			write (fd, s, 1);
			s++;
		}
		write(fd, &f, 1);
	}
}
/*
void	ft_putendl_fd(char *s, int fd)
{
	if (fd < 0)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
size_t	ft_strlen(const char *s);

void	ft_putendl_fd(const char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

void	ft_putstr_fd(char *s, int fd);

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{n
		write(fd, s, 1);
		s++;
	}
}

void	ft_putendl_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

int	main(void)
{
	char *str = "ecold 42";
	ft_putendl_fd(str, 1);
	return (0);
}*/
