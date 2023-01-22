/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:35:45 by hmaciel-          #+#    #+#             */
/*   Updated: 2022/11/08 23:31:23 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	char	*ptr;
	size_t	index;

	ptr = s;
	index = 0;
	while (index < len)
	{
		ptr[index] = c;
		index++;
	}
	return (s);
}
