/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 19:38:06 by murathanelc       #+#    #+#             */
/*   Updated: 2024/02/28 23:15:26 by murathanelc      ###   ########.fr       */
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
	int	i;

	i = ft_count_list(*a);
	if (!a || !(*a) || i == 1)
	{
		exit(1);
		return ;
	}
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_list **b)
{
	int	i;

	i = ft_count_list(*b);
	if (!b || !(*b) || i == 1)
	{
		exit(1);
		return ;
	}
	swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_list **tail)
{
	sa(tail);
	sb(tail);
}
