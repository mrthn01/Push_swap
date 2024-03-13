/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_a_to_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 00:41:39 by murathanelc       #+#    #+#             */
/*   Updated: 2024/03/12 21:44:49 by murathanelc      ###   ########.fr       */
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
	while ((*stack_a)->data != number)
		ra(stack_a);
	while (target_b(*stack_b, number))
		rrb(stack_b);
	pb(stack_b, stack_a);
	return (-1);
}
