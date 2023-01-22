/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:10:04 by hmaciel-          #+#    #+#             */
/*   Updated: 2022/11/10 16:01:10 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *bigptr, int ch, size_t length)
{
	unsigned char	*s;
	unsigned char	chr;

	s = (unsigned char *)bigptr;
	chr = (unsigned char)ch;
	while (length--)
	{
		if (*s == chr)
			return (s);
		s++;
	}
	return (NULL);
}
