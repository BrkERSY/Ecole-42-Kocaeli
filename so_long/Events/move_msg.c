/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_msg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bersoy <bersoy@student.42.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:31:33 by bersoy            #+#    #+#             */
/*   Updated: 2022/06/14 16:31:35 by bersoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/so_long.h"

void	move_msg(t_data *data)
{
	ft_putstr_fd("\e[1;1H\e[2J", 1);
	ft_putstr_fd("\033[38;5;217m", 1);
	printf("Hareket Sayaci : %d\n", data->steps_count);
}
