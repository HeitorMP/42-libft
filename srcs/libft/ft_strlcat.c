/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:08:56 by hmaciel-          #+#    #+#             */
/*   Updated: 2022/11/08 16:09:40 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char		*d;
	const char	*s;
	size_t		l_free;
	size_t		l_dest;

	l_free = size;
	d = dest;
	s = src;
	while (l_free-- != 0 && *d != '\0')
		d++;
	l_dest = d - dest;
	l_free = size - l_dest;
	if (l_free == 0)
		return (l_dest + ft_strlen(s));
	while (*s != '\0')
	{
		if (l_free != 1)
		{
			*d++ = *s;
			l_free--;
		}
		s++;
	}
	*d = '\0';
	return (l_dest + (s - src));
}
