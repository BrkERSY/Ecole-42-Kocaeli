/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bersoy <bersoy@student.42.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:34:37 by bersoy            #+#    #+#             */
/*   Updated: 2022/06/14 16:34:39 by bersoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*ptr_dest;
	char	*ptr_src;

	ptr_dest = (char *)dest;
	ptr_src = (char *)src;
	if (ptr_src < ptr_dest)
	{
		while (len-- > 0)
		{
			ptr_dest[len] = ptr_src[len];
		}
	}
	else if (ptr_src > ptr_dest)
	{
		ft_memcpy(dest, src, len);
	}
	return (dest);
}
