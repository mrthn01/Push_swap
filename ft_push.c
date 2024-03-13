/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:32:18 by murathanelc       #+#    #+#             */
/*   Updated: 2024/03/12 23:05:04 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_list **dest, t_list	**src)
{
	t_list	*node;

	if (!(*src))
		return ;
	node = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	node->prev = NULL;
	if (*dest == NULL)
	{
		*dest = node;
		node->next = NULL;
	}
	else
	{
		node->next = *dest;
		node->next->prev = node;
		*dest = node;
	}
}

void	pa(t_list **a, t_list **b)
{
	push(a, b);
	write(1, "pa\n", 3);
}

void	pb(t_list **b, t_list **a)
{
	push(b, a);
	write(1, "pb\n", 3);
}
