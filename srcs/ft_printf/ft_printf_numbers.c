/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:37:19 by hmaciel-          #+#    #+#             */
/*   Updated: 2022/11/27 16:48:51 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	call_int(va_list args)
{
	int	len;
	int	nbr;

	nbr = va_arg(args, int);
	len = ft_get_digits(nbr);
	ft_putnbr_fd(nbr, 1);
	return (len);
}

int	call_hex(va_list args, char next)
{
	int	ret;
	int	len;

	ret = va_arg(args, long long int);
	len = ft_get_hexlen(ret);
	put_hex(ret, next);
	return (len);
}

int	call_ptr(va_list args)
{
	int				len;	
	long long int	ret;

	ret = va_arg(args, long long int);
	if (!ret)
	{
		write(1, "(nil)", 5);
		len = 5;
	}
	else
	{
		write(1, "0x", 2);
		len = put_pointer(ret) + 2;
	}
	return (len);
}

int	call_unsigned(va_list args)
{
	long int		ret;
	int				len;

	ret = va_arg(args, unsigned int);
	len = ft_get_digits(ret);
	ft_putunsigned(ret);
	return (len);
}
