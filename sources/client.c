/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 03:51:12 by aabduvak          #+#    #+#             */
/*   Updated: 2022/02/11 00:56:36 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minitalk.h"

static void	handler(int sig)
{
	static int	received = 0;

	if (sig == SIGUSR1)
		++received;
	else
	{
		ft_putnbr_fd(received, 1);
		ft_putchar_fd('\n', 1);
		exit(0);
	}
}

void	ft_kill(int pid, char *str)
{
	int		i;
	char	c;

	while (*str)
	{
		i = 8;
		c = *str++;
		while (i--)
		{
			if (c >> i & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			usleep(200);
		}
		i++;
	}
	i = 8;
	while (i--)
	{
		kill(pid, SIGUSR1);
		usleep(200);
	}
}

int	main(int argc, char **argv)
{
	ft_printf("Sent:\t\t%d\n", ft_strlen(argv[2]));
	ft_printf("Received:\t\t");
	if (argc != 3 || !ft_strlen(argv[2]))
		return (1);
	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);
	ft_kill(ft_atoi(argv[1]), argv[2]);
	while (1)
		pause();
	return (0);
}
