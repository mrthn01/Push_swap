/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 00:39:16 by murathanelc       #+#    #+#             */
/*   Updated: 2024/03/12 22:44:57 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_list **tail)
{
	t_list	*current;
	t_list	*last_node;
	int		i;

	i = ft_count_list(*tail);
	if (!tail || i == 1)
		return ;
	last_node = ft_lstlast(*tail);
	current = last_node;
	current->next = *tail;
	(*tail)->prev = current;
	last_node = last_node->prev;
	last_node->next = NULL;
	current->prev = NULL;
	*tail = current;
}

void	rra(t_list **a)
{
	reverse_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_list **b)
{
	reverse_rotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **a, t_list **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	write(1, "rrr\n", 4);
}
