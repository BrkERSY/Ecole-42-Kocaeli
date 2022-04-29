/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bersoy <bersoy@student.42.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:32:51 by bersoy            #+#    #+#             */
/*   Updated: 2022/03/03 16:16:38 by bersoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	end_s1;
	char	*string;

	if (s1 == NULL)
	{
		s1 = (char *)malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	string = malloc(((ft_strlen(s1)) + (ft_strlen(s2)) + 1));
	if (string == NULL)
		return (NULL);
	i = -1;
	while (s1[++i] != '\0')
		string[i] = s1[i];
	end_s1 = i;
	i = -1;
	while (s2[++i] != '\0')
		string[end_s1 + i] = s2[i];
	string[end_s1 + i] = '\0';
	free(s1);
	return (string);
}

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

char	*ft_strchr(char *src, int c)
{
	int	i;

	i = 0;
	if (!src)
		return (NULL);
	while (src[i] != '\0' || c == '\0')
	{
		if (src[i] == (char) c)
			return ((char *)src + i);
		i++;
	}
	return (NULL);
}

char	*ft_read_line(char *src)
{
	size_t	i;
	char	*str;

	i = 0;
	if (src == NULL)
		return (NULL);
	while (src[i] != '\0' && src[i] != '\n')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0' && src[i] != '\n')
	{
		str[i] = src[i];
		i++;
	}
	if (src[i] == '\n')
		str[i++] = '\n';
	str[i] = '\0';
	return (str);
}

char	*ft_save(char *src)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	while (src[i] != '\0' && src[i] != '\n')
		i++;
	if (src[i] == '\0')
	{
		free(src);
		return (0);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(src) - i + 1));
	if (str == NULL)
		return (NULL);
	i += 1;
	j = 0;
	while (src[i] != '\0')
		str[j++] = src[i++];
	str[j] = '\0';
	free(src);
	return (str);
}
