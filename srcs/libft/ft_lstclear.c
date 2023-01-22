/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:36:36 by hmaciel-          #+#    #+#             */
/*   Updated: 2022/11/10 13:30:15 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp_node1;
	t_list	*temp_node2;

	if (!lst || !del)
		return ;
	temp_node1 = *lst;
	temp_node2 = *lst;
	while (temp_node1)
	{
		temp_node2 = temp_node2->next;
		del(temp_node1->content);
		free(temp_node1);
		temp_node1 = temp_node2;
	}
	*lst = 0;
}
