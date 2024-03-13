/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lists.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 19:34:57 by murathanelc       #+#    #+#             */
/*   Updated: 2024/03/13 14:22:35 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		ft_error();
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
		ft_error();
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

int	target_a(t_list *a, int number)
{
	t_list	*tmp;
	int		i;

	i = 1;
	if (number > a->data && number < ft_lstlast(a)->data)
		i = 0;
	else if (number < a->data || number > maximum_number(a))
		i = ft_index(a, maximum_number(a));
	else
	{
		tmp = a->next;
		while (a->data < number || tmp->data > number)
		{
			a = a->next;
			tmp = a->next;
			i++;
		}
	}
	return (i);
}

int	target_b(t_list *b, int number)
{
	t_list	*tmp;
	int		i;

	i = 1;
	if (number > b->data && number < ft_lstlast(b)->data)
		i = 0;
	else if (number < b->data || number > maximum_number(b))
		i = ft_index(b, maximum_number(b));
	else
	{
		tmp = b->next;
		while (number > b->data || number < tmp->data)
		{
			b = b->next;
			tmp = b->next;
			i++;
		}
	}
	return (i);
}
