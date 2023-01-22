/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:32:34 by hmaciel-          #+#    #+#             */
/*   Updated: 2022/11/06 17:02:08 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	index;
	unsigned int	result;

	result = 0;
	index = 0;
	while (src[result] != '\0')
	{
		result++;
	}
	if (size < 1)
		return (result);
	while (src[index] != '\0' && index < size - 1)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (result);
}
/*
int	main()
{	
	
	char	first[] = "test";
	char	second[] = "teste";

	unsigned int a = ft_strlcpy(first, second, 4);

	printf("%s", first);
	printf("%d", a);
	
	return (0);
}*/
