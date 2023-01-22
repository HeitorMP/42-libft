/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 04:32:40 by hmaciel-          #+#    #+#             */
/*   Updated: 2022/11/27 16:48:17 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_format(char next, va_list args)
{
	int	len;

	len = 0;
	if (next == '%')
	{
		write(1, "%", 1);
		len = 1;
	}
	else if (next == 'c')
		len = call_char(args);
	else if (next == 's')
		len = call_string(args);
	else if (next == 'd' || next == 'i')
		len = call_int(args);
	else if (next == 'x' || next == 'X')
		len = call_hex(args, next);
	else if (next == 'p')
		len = call_ptr(args);
	else if (next == 'u')
		len = call_unsigned(args);
	return (len - 2);
}

int	ft_printf(const char *str, ...)
{
	va_list	argp;
	int		len;

	va_start(argp, str);
	len = ft_strlen((str));
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			len = len + ft_check_format(*str, argp);
		}
		else
			write(1, &*str, 1);
		str++;
	}
	va_end(argp);
	return (len);
}
