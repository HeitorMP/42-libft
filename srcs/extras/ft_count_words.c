/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:17:21 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/24 14:47:54 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	int	words;
	int	index;
	int	is_new;

	is_new = 1;
	index = 0;
	words = 0;
	while (s[index])
	{
		if (s[index] == c)
			is_new = 1;
		if (s[index] != c && is_new)
		{
			words++;
			is_new = 0;
		}
		index++;
	}
	return (words);
}
