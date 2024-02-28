/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 00:39:16 by murathanelc       #+#    #+#             */
/*   Updated: 2024/02/28 23:10:44 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate(t_list **tail)
{
	t_list	*current;
	t_list	*last_node;
	int		i;

	i = ft_count_list(*tail);
	if (!tail || !(*tail) || i == 1)
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
	int	i;

	i = ft_count_list(*a);
	if (!a || !(*a) || i == 1)
		return ;
	ft_reverse_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_list **b)
{
	int	i;

	i = ft_count_list(*b);
	if (!b || !(*b) || i == 1)
		return ;
	ft_reverse_rotate(b);
	write(1, "rrb\n", 4);
}