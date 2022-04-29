/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bersoy <bersoy@student.42.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:40:02 by bersoy            #+#    #+#             */
/*   Updated: 2022/02/14 14:02:09 by bersoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*a;
	unsigned int	b;

	if (!s)
		return (0);
	a = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!a)
		return (0);
	b = 0;
	while (s[b])
	{
		a[b] = f(b, s[b]);
		b++;
	}
	a[b] = 0;
	return (a);
}
