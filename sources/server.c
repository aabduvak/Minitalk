/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 03:51:35 by aabduvak          #+#    #+#             */
/*   Updated: 2022/02/11 00:59:28 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minitalk.h"

static void	ft_get_printpid(void)
{
	ft_printf("pid: %d\n", getpid());
}

static void	sig_handler(int signo, siginfo_t *info, void *context)
{
	static unsigned char	data = 0;
	static int				count = 0;
	static pid_t			client_pid;

	(void)context;
	if (!client_pid)
		client_pid = info->si_pid;
	if (signo == SIGUSR2)
		data |= 1;
	if (++count == 8)
	{
		count = 0;
		if (data == 0)
		{
			kill(client_pid, SIGUSR2);
			client_pid = 0;
			return ;
		}
		ft_printf("%c", data);
		data = 0;
		kill(client_pid, SIGUSR1);
	}
	else
		data <<= 1;
}

int	main(void)
{
	struct sigaction	s_sigaction;

	ft_get_printpid();
	s_sigaction.sa_sigaction = sig_handler;
	s_sigaction.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &s_sigaction, 0);
	sigaction(SIGUSR2, &s_sigaction, 0);
	while (1)
		pause();
	return (0);
}
