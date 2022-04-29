/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bersoy <bersoy@student.42.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:32:09 by bersoy            #+#    #+#             */
/*   Updated: 2022/02/19 10:14:26 by bersoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr2;

	while (n == 0)
		return (0);
	ptr = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n)
	{
		if (*ptr != *ptr2)
			return (*ptr - *ptr2);
		ptr++;
		ptr2++;
		n--;
	}
	return (0);
}
