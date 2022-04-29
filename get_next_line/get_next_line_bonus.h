/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bersoy <bersoy@student.42.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:33:01 by bersoy            #+#    #+#             */
/*   Updated: 2022/03/02 17:07:30 by bersoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 4096
# endif

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

char	*get_next_line(int fd);
char	*ft_read_line(char *src);
char	*ft_save(char *src);
char	*get_line(char *src, int fd);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(char *s);
char	*ft_strchr(char *src, int c);

#endif
