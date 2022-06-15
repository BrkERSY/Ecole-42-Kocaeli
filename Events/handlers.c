/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bersoy <bersoy@student.42.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:31:14 by bersoy            #+#    #+#             */
/*   Updated: 2022/06/14 16:31:16 by bersoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/so_long.h"

int	handle_keypress(int keysym, t_data *data)
{
	if (keysym == ESC)
	{
		mlx_destroy_window(data->mlx, data->win);
		ft_putstr_fd(GREEN"Program basarili bir sekilde kapatildi...\n", 1);
		exit(0);
	}
	move_player(data, keysym);
	return (0);
}

int	handle_btnx(t_data *data)
{
	mlx_destroy_window(data->mlx, data->win);
	ft_putstr_fd(GREEN"Program basarili bir sekilde kapatildi...\n", 1);
	exit(0);
	return (0);
}
