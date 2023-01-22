/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:21:07 by hmaciel-          #+#    #+#             */
/*   Updated: 2022/11/03 11:57:00 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			index;

	index = 0;
	if (n != 0)
	{
		p1 = (unsigned char *)s1;
		p2 = (unsigned char *)s2;
		while (index < n)
		{
			if (p1[index] > p2[index])
				return (1);
			else if (p1[index] < p2[index])
				return (-1);
			index++;
		}
	}
	return (0);
}
