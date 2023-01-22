/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:40:53 by hmaciel-          #+#    #+#             */
/*   Updated: 2022/11/08 13:03:28 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_get_start(char const *s1, char const *set)
{
	size_t	index;
	size_t	start;

	start = 0;
	index = 0;
	while (s1[index])
	{
		if (ft_strchr(set, s1[index]) == NULL)
			break ;
		start++;
		index++;
	}
	return (start);
}

size_t	ft_get_end(char const *s1, char const *set)
{
	size_t	index;
	size_t	end;

	end = 0;
	index = ft_strlen(s1) - 1;
	while (s1[index])
	{
		if (ft_strchr(set, s1[index]) == NULL)
			break ;
		end++;
		index--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*dest;
	int			len_dest;
	size_t		end;
	size_t		start;

	if (!s1 || !set)
		return (NULL);
	start = ft_get_start(s1, set);
	end = ft_get_end(s1, set);
	len_dest = ((ft_strlen(s1) - (start + end)));
	if (ft_strlen(s1) == start)
	{	
		dest = malloc(sizeof(char) * 1);
		if (!dest)
			return (NULL);
		dest[0] = '\0';
		return (dest);
	}
	dest = malloc(sizeof(char) * len_dest + 1);
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s1 + start, len_dest);
	dest[len_dest] = '\0';
	return (dest);
}
