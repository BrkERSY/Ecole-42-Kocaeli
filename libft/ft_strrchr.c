/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bersoy <bersoy@student.42.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:46:18 by bersoy            #+#    #+#             */
/*   Updated: 2022/02/21 13:24:14 by bersoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_pos;

	last_pos = (0);
	if (c > 127)
		return ((char *)s);
	while (*s)
	{
		if (*s == c)
			last_pos = (char *)s;
		s++;
	}
	if (last_pos)
		return (last_pos);
	if (c == '\0')
		return ((char *)s);
	return (0);
}
