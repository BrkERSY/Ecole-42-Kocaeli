/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bersoy <bersoy@student.42.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:41:17 by bersoy            #+#    #+#             */
/*   Updated: 2022/02/18 14:42:16 by bersoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	char	*b;
	size_t	c;
	size_t	d;

	d = 0;
	c = ((size_t)start);
	if (!s)
		return (0);
	while (d < len && s[d + start] != '\0')
		d++;
	b = malloc((d + 1) * sizeof(char));
	if (!b)
		return (0);
	a = 0;
	while (a < len && c < ft_strlen(s))
	{
		b[a] = s[c];
		a++;
		c++;
	}
	b[a] = '\0';
	return (b);
}
