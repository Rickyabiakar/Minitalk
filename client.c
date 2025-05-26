/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:27:43 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 18:10:28 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

static volatile sig_atomic_t	g_ack_tracker = 0;

static void	bit_received_ack(int sig)
{
	(void)sig;
	g_ack_tracker |= SIGUSR1;
}

static void	message_received_ack(int sig)
{
	(void)sig;
	g_ack_tracker |= SIGUSR2;
}

static void	bit_send(int pid, int bit)
{
	g_ack_tracker &= ~SIGUSR1;
	if (bit)
		kill(pid, SIGUSR2);
	else
		kill(pid, SIGUSR1);
	while (!(g_ack_tracker & SIGUSR1))
		usleep(50);
}

static void	char_send(int pid, char c)
{
	int	i;

	i = 8;
	while (i--)
		bit_send(pid, (c >> i) & 1);
}

int	main(int argc, char **argv)
{
	char	*msg;
	int		pid;

	if (argc != 3 || ft_atoi(argv[1]) <= 0 || !argv[2][0])
	{
		return (0);
	}
	pid = ft_atoi(argv[1]);
	if (kill(pid, 0) == -1)
		return (0);
	msg = argv[2];
	signal(SIGUSR1, bit_received_ack);
	signal(SIGUSR2, message_received_ack);
	ft_putstr_fd("total number of chars sent: ", 1);
	ft_putnbr_fd(ft_strlen(argv[2]), 1);
	ft_putchar_fd('\n', 1);
	while (*msg)
		char_send(ft_atoi(argv[1]), *msg++);
	char_send(ft_atoi(argv[1]), '\0');
	while (!(g_ack_tracker & SIGUSR2))
		pause();
	ft_putstr_fd("✅ Server acknowledged full message with SIGUSR2!\n", 1);
	return (0);
}
