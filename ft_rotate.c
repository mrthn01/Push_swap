/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 23:33:29 by murathanelc       #+#    #+#             */
/*   Updated: 2024/03/12 22:44:37 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **tail)
{
	t_list	*first_node;
	t_list	*last_node;

	if (!tail || !(*tail))
		return ;
	last_node = ft_lstlast(*tail);
	first_node = *tail;
	last_node->next = first_node;
	first_node->prev = last_node;
	*tail = (*tail)->next;
	(*tail)->prev = NULL;
	first_node->next = NULL;
	last_node = first_node;
}

void	ra(t_list **a)
{
	rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_list **b)
{
	rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_list **a, t_list **b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}
