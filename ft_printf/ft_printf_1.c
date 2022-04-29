/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bersoy <bersoy@student.42.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 13:29:08 by bersoy            #+#    #+#             */
/*   Updated: 2022/03/15 13:53:00 by bersoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_v2(char c)
{
	write(1, &c, 1);
	return (1);
}

int	hex_print(unsigned int n, char c)
{
	int				i;
	int				j;
	int				len;
	char			*a;
	unsigned int	n1;

	if (c == 'X')
		a = ft_strdup("0123456789ABCDEF");
	else
		a = ft_strdup("0123456789abcdef");
	i = 1;
	n1 = n;
	while (n1 >= 16 && i++)
		n1 = n1 / 16;
	len = i;
	while (--i >= 0)
	{
		n1 = n;
		j = i;
		while (--j >= 0)
			n1 = n1 / 16;
		ft_putchar_v2(a[n1 % 16]);
	}
	free (a);
	return (len);
}

int	ptr_printer(unsigned long n)
{
	char	*a;

	a = ft_strdup("0123456789abcdef");
	if (n >= 16)
	{
		ptr_printer(n / 16);
		ptr_printer(n % 16);
	}
	else
		ft_putchar_v2(a[n]);
	free (a);
	return (0);
}

int	ptr_print(unsigned long n)
{
	int	i;

	i = 1;
	ft_putchar_v2('0');
	ft_putchar_v2('x');
	ptr_printer(n);
	while (n >= 16)
	{
		n /= 16;
		i++;
	}
	return (i + 2);
}
