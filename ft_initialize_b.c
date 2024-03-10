/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 22:55:26 by murathanelc       #+#    #+#             */
/*   Updated: 2024/03/10 18:00:17 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	target_b(t_list *b, int number)
{
	t_list	*tmp;
	int		i;

	i = 1;
	if (number > b->data && number < ft_lstlast(b)->data)
		i = 0;
	else if (number < b->data || number > maximum_number(b))
		i = ft_index(b, maximum_number(b));
	else
	{
		tmp = b->next;
		while (number > b->data || number < tmp->data)
		{
			b = b->next;
			tmp = b->next;
			i++;
		}
	}
	return (i);
}

int	cost_b(t_list *stack_a, t_list *stack_b)
{
	t_list	*tmp;
	int		i;

	tmp = stack_a;
	i = cost_rrr_b(stack_a, stack_b, tmp->data);
	while (tmp != NULL)
	{
		if (i > cost_rr_b(stack_a, stack_b, tmp->data))
			i = cost_rr_b(stack_a, stack_b, tmp->data);
		if (i > cost_rrr_b(stack_a, stack_b, tmp->data))
			i = cost_rrr_b(stack_a, stack_b, tmp->data);
		if (i > cost_rb_rra_b(stack_a, stack_b, tmp->data))
			i = cost_rb_rra_b(stack_a, stack_b, tmp->data);
		if (i > cost_rrb_ra_b(stack_a, stack_b, tmp->data))
			i = cost_rrb_ra_b(stack_a, stack_b, tmp->data);
		tmp = tmp->next;
	}
	return (i);
}

// void	initialize_b(t_list **stack_b, t_list **stack_a)
// {
// 	target_b(*stack_b, (*stack_a)->data);
// 	cost_b(*stack_a, *stack_b);
// }
