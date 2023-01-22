/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 22:11:18 by hmaciel-          #+#    #+#             */
/*   Updated: 2022/11/10 13:24:59 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp_node;

	if (!lst || !f)
		return ;
	temp_node = lst;
	while (temp_node)
	{
		f(temp_node->content);
		temp_node = temp_node->next;
	}
}
