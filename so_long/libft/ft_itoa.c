/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bersoy <bersoy@student.42.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:34:10 by bersoy            #+#    #+#             */
/*   Updated: 2022/06/14 16:34:12 by bersoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*set_str(int n, int *bas)
{
	char	*str;

	*bas = 1;
	if (n < 0)
	{
		n *= -1;
		(*bas)++;
	}
	while (n >= 10)
	{
		n /= 10;
		(*bas)++;
	}
	str = (char *)malloc(sizeof(char) * (*bas + 1));
	if (!str)
		return (NULL);
	str[0] = '-';
	str[(*bas)] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		bas;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = set_str(n, &bas);
	if (n < 0)
		n *= -1;
	if (!str)
		return (NULL);
	while (n >= 10)
	{
		str[--bas] = n % 10 + '0';
		n = n / 10;
	}
	str[--bas] = n % 10 + '0';
	return (str);
}
