/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:28:28 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:28:31 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>
#define _POSIX_C_SOURCE 200809L

static void	handle_signal(int sig, siginfo_t *info, void *context)
{
	static int		g_bit_index = 0;
	static char		g_char_buffer = 0;
	static pid_t	g_sender_pid = 0;

	(void)context;
	if (!g_sender_pid)
		g_sender_pid = info->si_pid;
	g_char_buffer |= (sig == SIGUSR2) << (7 - g_bit_index);
	g_bit_index++;
	if (g_bit_index == 8)
	{
		g_bit_index = 0;
		if (!g_char_buffer)
		{
			ft_putchar_fd('\n', 1);
			kill(g_sender_pid, SIGUSR2);
			g_sender_pid = 0;
		}
		else
		{
			write(1, &g_char_buffer, 1);
			g_char_buffer = 0;
		}
	}
	kill(info->si_pid, SIGUSR1);
}

int	main(void)
{
	struct sigaction	sig_config;

	sig_config.sa_sigaction = handle_signal;
	sig_config.sa_flags = SA_SIGINFO;
	sigemptyset(&sig_config.sa_mask);
	ft_putstr_fd("PID server: ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putchar_fd('\n', 1);
	sigaction(SIGUSR1, &sig_config, NULL);
	sigaction(SIGUSR2, &sig_config, NULL);
	while (1)
		pause();
	return (0);
}
