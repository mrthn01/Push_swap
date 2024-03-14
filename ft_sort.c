/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:01:52 by murathanelc       #+#    #+#             */
/*   Updated: 2024/03/13 21:38:17 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three_numbers(t_list **a)
{
	int	max_number;

	max_number = maximum_number(*a);
	if ((*a)->data == max_number)
		ra(a);
	if ((*a)->data > (*a)->next->data)
		sa(a);
	else if ((*a)->next->data == max_number)
	{
		if (ft_lstlast(*a)->data < (*a)->data)
			rra(a);
		else
		{
			sa(a);
			ra(a);
		}
	}
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

t_list	*more_than_three_number(t_list **a)
{
	t_list	*b;

	b = NULL;
	if (ft_count_list(*a) > 3 && !sorted(*a))
		pb(&b, a);
	if (ft_count_list(*a) > 3 && !sorted(*a))
		pb(&b, a);
	if (ft_count_list(*a) > 3 && !sorted(*a))
		move_a_to_b(a, &b);
	if (!sorted(*a))
		sort_three_numbers(a);
	return (b);
}

t_list	**move_b_to_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*current;
	int		i;

	while ((*stack_b) != NULL)
	{
		current = *stack_b;
		i = cost_a(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == cost_rr_a(*stack_a, *stack_b, current->data))
				i = rr_b(stack_a, stack_b, current->data);
			else if (i == cost_rrr_a(*stack_a, *stack_b, current->data))
				i = rrr_b(stack_a, stack_b, current->data);
			else if (i == cost_rra_rb_a(*stack_a, *stack_b, current->data))
				i = rb_rra_b(stack_a, stack_b, current->data);
			else if (i == cost_ra_rrb_a(*stack_a, *stack_b, current->data))
				i = rrb_ra_b(stack_a, stack_b, current->data);
			else
				current = current->next;
		}
	}
	return (stack_a);
}

void	check_nodes(t_list **a)
{
	t_list	*b;
	int		i;

	b = NULL;
	i = ft_index(*a, minimum_number(*a));
	if (ft_count_list(*a) == 2)
		sa(a);
	else
	{
		b = more_than_three_number(a);
		a = move_b_to_a(a, &b);
		i = ft_index(*a, minimum_number(*a));
		if (i < ft_count_list(*a) - i)
		{
			while ((*a)->data != minimum_number(*a))
				ra(a);
		}
		else
		{
				while ((*a)->data != minimum_number(*a))
					rra(a);
		}	
	}
}
