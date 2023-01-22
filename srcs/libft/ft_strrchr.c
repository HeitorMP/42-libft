/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:35:09 by hmaciel-          #+#    #+#             */
/*   Updated: 2022/11/10 13:31:14 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int ch)
{
	char	*temp;
	char	*dest;
	int		i;

	i = 0;
	temp = (char *)s;
	dest = NULL;
	while (temp[i])
	{
		if (temp[i] == ch)
			dest = &temp[i];
		i++;
	}
	if (temp[i] == ch)
		return (&temp[i]);
	return (dest);
}
