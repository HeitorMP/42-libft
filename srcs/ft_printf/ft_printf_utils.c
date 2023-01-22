/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:06:33 by hmaciel-          #+#    #+#             */
/*   Updated: 2022/11/27 16:49:14 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_get_hexlen(unsigned	int num)
{
	int	len;

	if (num == 0)
		return (1);
	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

int	ft_ptr_len(unsigned long long num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	put_hex(long int np, char x)
{
	char	*base;
	char	*basex;

	base = "0123456789abcdef";
	basex = "0123456789ABCDEF";
	if (np < 0)
		np = (4294967295 - (np * -1)) + 1;
	if (np >= 16)
	{
		put_hex(np / 16, x);
		put_hex(np % 16, x);
	}
	else
	{
		if (x == 'x')
			write(1, &base[np], 1);
		else if (x == 'X')
			write(1, &basex[np], 1);
	}
}

int	put_pointer(unsigned long long np)
{
	char				*base;
	unsigned long long	len;

	base = "0123456789abcdef";
	len = ft_ptr_len(np);
	if (np >= 16)
	{
		put_pointer(np / 16);
		put_pointer(np % 16);
	}
	else
		write(1, &base[np], 1);
	return (len);
}
