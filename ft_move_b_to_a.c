/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_b_to_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 01:13:43 by murathanelc       #+#    #+#             */
/*   Updated: 2024/03/12 21:53:24 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rr_b(t_list **stack_a, t_list **stack_b, int number)
{
	while ((*stack_b)->data != number && target_a(*stack_a, number) > 0)
		rr(stack_a, stack_b);
	while ((*stack_b)->data != number)
		rb(stack_b);
	while (target_a(*stack_a, number) > 0)
		ra(stack_a);
	pa(stack_a, stack_b);
	return (-1);
}

int	rrr_b(t_list **stack_a, t_list **stack_b, int number)
{
	while ((*stack_b)->data != number && target_a(*stack_a, number) > 0)
		rrr(stack_a, stack_b);
	while ((*stack_b)->data != number)
		rrb(stack_b);
	while (target_a(*stack_a, number) > 0)
		rra(stack_a);
	pa(stack_a, stack_b);
	return (-1);
}

int	rrb_ra_b(t_list **stack_a, t_list **stack_b, int number)
{
	while (target_a(*stack_a, number) > 0)
		ra(stack_a);
	while ((*stack_b)->data != number)
		rrb(stack_b);
	pa(stack_a, stack_b);
	return (-1);
}

int	rb_rra_b(t_list **stack_a, t_list **stack_b, int number)
{
	while (target_a(*stack_a, number) > 0)
		rra(stack_a);
	while ((*stack_b)->data != number)
		rb(stack_b);
	pa(stack_a, stack_b);
	return (-1);
}
