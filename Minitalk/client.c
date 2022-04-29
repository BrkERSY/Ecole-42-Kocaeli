/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bersoy <bersoy@student.42.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 13:27:04 by bersoy            #+#    #+#             */
/*   Updated: 2022/04/28 16:51:19 by bersoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_send(int pid, char c)
{
	int	i;
	int	bit;

	i = 7;
	while (i >= 0)
	{
		bit = (c >> i) & 1;
		if (bit == 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		--i;
		usleep(150);
	}
}

void	message_char(int pid, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_send(pid, str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	if (argc < 3)
		ft_putstr(PIDERROR);
	if (argc > 3)
		ft_putstr(ARGERROR);
	ft_putstr_fd("Sent    : ", 1);
	ft_putnbr_fd(ft_strlen(argv[2]), 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("Received: ", 1);
	ft_putnbr_fd(ft_strlen(argv[2]), 1);
	ft_putchar_fd('\n', 1);
	pid = ft_atoi(argv[1]);
	message_char(pid, argv[2]);
	return (0);
}
