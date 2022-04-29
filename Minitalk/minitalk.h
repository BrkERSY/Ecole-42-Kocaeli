/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bersoy <bersoy@student.42.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 12:49:49 by bersoy            #+#    #+#             */
/*   Updated: 2022/04/18 13:21:51 by bersoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# define PIDERROR "piderror"
# define ARGERROR "argerror"

# include <unistd.h>
# include <stdlib.h>
# include <signal.h>

char	*ft_itoa(int n);
void	ft_putstr(char *str);
int		ft_atoi(const char *str);
int		ft_strlen(const char *str);
char	*ft_strjoin(char *s1, char const s2);
char	*ft_strdup(const char *str);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
#endif