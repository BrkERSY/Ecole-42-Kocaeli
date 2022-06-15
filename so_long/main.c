/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bersoy <bersoy@student.42.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:38:26 by bersoy            #+#    #+#             */
/*   Updated: 2022/06/14 16:38:26 by bersoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/so_long.h"

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc == 2)
	{
		if (name_check(argv[1]) == FAILURE)
			error_msg(ERRBER, &data);
		create_map(argv[1], &data);
		init_map(&data);
		check_map(&data);
		f_init_player(&data);
		init_window(&data);
		init_images(&data);
		loop_images(data);
		destroy_images(&data);
		ft_free(&data);
	}
	else
		error_msg2(ARGERR);
}
