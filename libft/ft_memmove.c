/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bersoy <bersoy@student.42.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:32:51 by bersoy            #+#    #+#             */
/*   Updated: 2022/02/18 20:31:09 by bersoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dst;
	if (s < d)
	{
		while (len-- > 0)
		{
			d[len] = s[len];
		}
	}
	else if (s > d)
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
