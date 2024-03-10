/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_a_to_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 00:41:39 by murathanelc       #+#    #+#             */
/*   Updated: 2024/03/10 16:03:22 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rr_a(t_list **stack_a, t_list **stack_b, int number)
{
	while ((*stack_a)->data != number && target_b(*stack_b, number) > 0)
		rr(stack_a, stack_b);
	while ((*stack_a)->data != number)
		ra(stack_a);
	while (target_b(*stack_b, number) > 0)
		rb(stack_b);
	pb(stack_b, stack_a);
	return (-1);
}

int	rrr_a(t_list **stack_a, t_list **stack_b, int number)
{
	while ((*stack_a)->data != number && target_b(*stack_b, number) > 0)
		rrr(stack_a, stack_b);
	while ((*stack_a)->data != number)
		rra(stack_a);
	while (target_b(*stack_b, number) > 0)
		rrb(stack_b);
	pb(stack_b, stack_a);
	return (-1);
}

int	rra_rb_a(t_list **stack_a, t_list **stack_b, int number)
{
	while ((*stack_a)->data != number)
		rra(stack_a);
	while (target_b(*stack_b, number) > 0)
		rb(stack_b);
	pb(stack_b, stack_a);
	return (-1);
}

int	ra_rrb_a(t_list **stack_a, t_list **stack_b, int number)
{
	while ((*stack_b)->data != number)
		rrb(stack_b);
	while (target_a(*stack_a, number) > 0)
		ra(stack_a);
	pb(stack_b, stack_a);
	return (-1);
}

void	move_a_to_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*current;
	int		i;

	while (ft_count_list(*stack_a) > 3 && !sorted(*stack_a))
	{
		current = *stack_a;
		i = cost_b(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == cost_rr_b(*stack_a, *stack_b, current->data))
				i = rr_a(stack_a, stack_b, current->data);
			else if (i == cost_rrr_b(*stack_a, *stack_b, current->data))
				i = rrr_a(stack_a, stack_b, current->data);
			else if (i == cost_rb_rra_b(*stack_a, *stack_b, current->data))
				i = rra_rb_a(stack_a, stack_b, current->data);
			else if (i == cost_rrb_ra_b(*stack_a, *stack_b, current->data))
				i = ra_rrb_a(stack_a, stack_b, current->data);
			else
				current = current->next;
		}
	}
}
