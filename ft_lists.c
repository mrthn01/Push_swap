/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lists.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 19:34:57 by murathanelc       #+#    #+#             */
/*   Updated: 2024/02/28 22:07:29 by murathanelc      ###   ########.fr       */
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

void	add_front(t_list **tail, int value)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (node == NULL)
		return ;
	node->data = value;
	node->prev = NULL;
	node->next = *tail;
	if (*tail != NULL)
		(*tail)->prev = node;
	*tail = node;
}

void	delete_node(t_list *node)
{
	if (node->prev != NULL)
		node->prev->next = node->next;
	if (node->next != NULL)
		node->next->prev = node->prev;
	free(node);
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
