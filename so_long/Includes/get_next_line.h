/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bersoy <bersoy@student.42.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:32:20 by bersoy            #+#    #+#             */
/*   Updated: 2022/06/14 16:32:21 by bersoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

char	*get_next_line(int fd);
char	*get_line(char *src, int fd);
char	*ft_read_line(char *src);
char	*ft_save(char *src);
char	*ft_strjoin1(char *s1, char *s2);
size_t	ft_strlen1(char *src);
char	*ft_strchr1(char *src, int c);

#endif
