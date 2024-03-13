/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 19:38:06 by murathanelc       #+#    #+#             */
/*   Updated: 2024/03/12 22:45:16 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **tail)
{
	if (!tail || (*tail)->next == NULL)
		return ;
	*tail = (*tail)->next;
	(*tail)->prev->prev = *tail;
	(*tail)->prev->next = (*tail)->next;
	if ((*tail)->next)
		(*tail)->next->prev = (*tail)->prev;
	(*tail)->next = (*tail)->prev;
	(*tail)->prev = NULL;
}

void	sa(t_list **a)
{
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_list **b)
{
	swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_list **a, t_list **b)
{
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}
