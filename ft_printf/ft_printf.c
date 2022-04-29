/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bersoy <bersoy@student.42.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 13:11:07 by bersoy            #+#    #+#             */
/*   Updated: 2022/03/16 18:59:50 by bersoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	array_print(char *str)
{
	int	len;

	len = 0;
	if (!str)
		return (array_print("(null)"));
	while (str[len])
		len += ft_putchar_v2(str[len]);
	return (len);
}

int	ft_bas_say(unsigned int a)
{
	int	i;

	i = 0;
	while (a >= 10)
	{
		a = a / 10;
		i++;
	}
	return (i + 1);
}

int	ft_uitoa(unsigned int a)
{
	int		len;
	char	*str;

	len = ft_bas_say(a);
	str = (char *)malloc(sizeof(char) * len + 1);
	str[len] = '\0';
	while (len > 0)
	{
		str[len - 1] = a % 10 + 48;
		a = a / 10;
		len--;
	}
	len = array_print(str);
	free (str);
	return (len);
}

int	ft_strchecker(va_list arg, int g)
{
	char	*a;
	int		len;

	len = 0;
	if (g == 'c')
		len += ft_putchar_v2(va_arg(arg, int));
	if (g == 's')
		len += array_print(va_arg(arg, char *));
	if (g == 'p')
		len += ptr_print(va_arg(arg, unsigned long));
	if (g == 'd' || g == 'i')
	{
		a = ft_itoa(va_arg(arg, int));
		len += array_print(a);
		free (a);
	}
	if (g == 'u')
		len += ft_uitoa(va_arg(arg, unsigned int));
	if (g == 'x' || g == 'X')
		len += hex_print(va_arg(arg, unsigned int), g);
	if (g == '%')
		len += ft_putchar_v2('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		len;
	int		i;

	va_start(arg, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len += ft_strchecker(arg, str[i]);
		}
		else
		{
			ft_putchar_v2(str[i]);
			len++;
		}
		i++;
	}
	va_end(arg);
	return (len);
}

/*
int	main()
{

	int				a = 61;
	char			c = 'a';
	char			*s = "Burak ERSOY";
	int				x = 123;
	int				X = 123;
	unsigned int	i = 4161;
	char			asd;

	ft_printf("%d\n", a);
	printf("%d\n\n", a);

	ft_printf("%c\n", c);
	printf("%c\n\n", c);

	ft_printf("%s\n", s);
	printf("%s\n\n", s);
	
	ft_printf("%x\n", x);
	printf("%x\n\n", x);

	ft_printf("%X\n", X);
	printf("%X\n\n", X);

	ft_printf("%i\n", i);
	printf("%i\n\n", i);

	ft_printf("%p\n", s);
	printf("%p\n", s);

	asd = ft_printf("%d\n", asd);
	ft_printf("%d\n", asd);
	printf("%d\n", asd);
	return (0);
}
*/