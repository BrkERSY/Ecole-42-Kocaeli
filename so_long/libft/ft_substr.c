/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bersoy <bersoy@student.42.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:37:49 by bersoy            #+#    #+#             */
/*   Updated: 2022/06/14 16:37:51 by bersoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	size_t	a;
	char	*b;
	size_t	c;
	size_t	sub_len;

	sub_len = 0;
	c = ((size_t)start);
	if (s == 0)
		return (0);
	while (sub_len < len && s[sub_len + start] != '\0')
		sub_len++;
	b = malloc((sub_len + 1) * sizeof(char));
	if (!b)
		return (0);
	a = 0;
	while (a < len && c < ft_strlen(s))
	{
		b[a++] = s[c++];
	}
	b[a] = '\0';
	return (b);
}
