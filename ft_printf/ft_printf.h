/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bersoy <bersoy@student.42.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 13:39:00 by bersoy            #+#    #+#             */
/*   Updated: 2022/03/16 17:39:54 by bersoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_strchecker(va_list arg, int g);
int		ft_bas_sayi(unsigned int c);
int		ft_uitoa(unsigned int a);
int		ft_array_print(char *str);
int		ft_putchar_v2(char g);
int		hex_print(unsigned int n, char c);
int		ptr_printer(unsigned long n);
int		ptr_print(unsigned long n);
char	*ft_itoa(int n);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);

#endif