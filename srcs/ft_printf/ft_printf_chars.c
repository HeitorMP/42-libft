/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_chars.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:38:13 by hmaciel-          #+#    #+#             */
/*   Updated: 2022/11/27 16:48:37 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	call_char(va_list args)
{
	char	char_to_print;

	char_to_print = va_arg(args, int);
	write(1, &char_to_print, 1);
	return (1);
}

int	call_string(va_list args)
{
	char	*str;
	int		len;

	len = 0;
	str = va_arg(args, char *);
	if (!str)
	{
		len = 6;
		write(1, "(null)", 6);
	}
	else
	{
		ft_putstr_fd(str, 1);
		len = (ft_strlen(str));
	}
	return (len);
}

void	ft_putunsigned(unsigned int n)
{
	ft_putnbr_fd(n, 1);
}
