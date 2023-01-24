/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:27:54 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/24 14:47:53 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_get_word(char *s, char c)
{
	char	*dest;
	int		end;
	int		i;

	i = 0;
	end = 0;
	while (s[end] != c && s[end] != '\0')
		end++;
	i = end;
	dest = malloc(sizeof(char) * end + 1);
	if (!dest)
		return (NULL);
	dest[end] = '\0';
	while (i > 0)
		dest[--end] = s[--i];
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		word_count;
	int		word_len;

	if (!s)
		return (NULL);
	word_len = ft_count_words(s, c);
	word_count = 0;
	array = malloc(sizeof(char *) * (word_len + 1));
	if (!array)
		return (NULL);
	while (word_count < word_len)
	{
		while (*s == c)
			s++;
		array[word_count] = ft_get_word((char *)s, c);
		word_count++;
		while (*s != c && *s != '\0')
			s++;
	}
	array[word_count] = 0;
	return (array);
}
