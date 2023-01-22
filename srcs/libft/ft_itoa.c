/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:26:06 by hmaciel-          #+#    #+#             */
/*   Updated: 2022/11/07 17:03:09 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int				digits;
	char			*dest;
	int				stop;
	long int		nb;

	nb = n;
	stop = 0;
	digits = ft_get_digits(nb);
	dest = malloc(sizeof(char) * digits + 1);
	if (!dest)
		return (NULL);
	dest[digits] = '\0';
	if (nb < 0)
	{
		dest[0] = '-';
		stop = 1;
		nb *= -1;
	}
	while (--digits >= stop)
	{
		dest[digits] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (dest);
}
