/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:29:01 by hmaciel-          #+#    #+#             */
/*   Updated: 2022/12/11 20:39:19 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	*get_line(char *str)
{
	char	*line;
	int		len;

	if (!str[0] || !str)
		return (NULL);
	len = 0;
	while (str[len] != '\n' && str[len] != '\0')
		len++;
	line = ft_calloc(len, sizeof(char) + 1 + 1);
	len = 0;
	while (str[len] != '\n' && str[len] != '\0')
	{
		line[len] = str[len];
		len++;
	}
	if (str[len] == '\n')
	{
		line[len] = '\n';
		len++;
	}
	return (line);
}

static char	*get_rest(char *str)
{
	int			len;
	int			len_rest;
	char		*rest;

	len = 0;
	len_rest = 0;
	if (str[0] == '\0')
	{
		free(str);
		return (NULL);
	}
	while (str[len] != '\0' && str[len] != '\n')
		len++;
	if (ft_strlen(str) - len == 1)
	{
		free(str);
		return (NULL);
	}
	rest = ft_calloc((ft_strlen(str) - len), sizeof(char) + 1);
	len++;
	while (str[len] != '\0')
		rest[len_rest++] = str[len++];
	free(str);
	return (rest);
}

static char	*get_buffer(char *str, int fd)
{
	char	*array;
	int		bytes;

	if (!str)
	{
		str = malloc(1);
		str[0] = '\0';
	}
	array = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	bytes = 1;
	while (!ft_strchr_gnl(str, '\n') && bytes != 0)
	{
		bytes = read(fd, array, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(array);
			return (NULL);
		}
		if (bytes > 0)
			str = ft_strjoin_gnl(str, array);
	}
	free(array);
	return (str);
}

char	*get_next_line(int fd)
{
	char			*line;
	static char		*str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	str = get_buffer(str, fd);
	line = get_line(str);
	if (!line)
	{
		free(str);
		str = malloc(1);
		str[0] = '\0';
	}
	str = get_rest(str);
	return (line);
}
