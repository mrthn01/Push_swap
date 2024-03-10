/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lists.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 19:34:57 by murathanelc       #+#    #+#             */
/*   Updated: 2024/03/10 17:35:17 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	initialize_node(t_list **node, int value)
{
	t_list	*new_node;
	t_list	*last_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return ;
	new_node->next = NULL;
	new_node->data = value;
	if (!(*node))
	{
		*node = new_node;
		new_node->prev = NULL;
	}
	else
	{
		last_node = ft_lstlast(*node);
		last_node->next = new_node;
		new_node->prev = last_node;
	}
}

int	sorted(t_list *node)
{
	int	i;

	i = node->data;
	while (node)
	{
		if (i > node->data)
			return (0);
		i = node->data;
		node = node->next;
	}
	return (1);
}

int	ft_count_list(t_list *node)
{
	int	i;

	i = 0;
	while (node != NULL)
	{
		i += 1;
		node = node->next;
	}
	return (i);
}
