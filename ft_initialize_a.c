/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 22:46:05 by murathanelc       #+#    #+#             */
/*   Updated: 2024/03/10 17:54:07 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	target_a(t_list *a, int number)
{
	t_list	*tmp;
	int		i;

	i = 1;
	if (number > a->data && number < ft_lstlast(a)->data)
		i = 0;
	else if (number < a->data || number > maximum_number(a))
		i = ft_index(a, maximum_number(a));
	else
	{
		tmp = a->next;
		while (a->data < number || tmp->data > number)
		{
			a = a->next;
			tmp = a->next;
			i++;
		}
	}
	return (i);
}

int	cost_a(t_list *a, t_list *b)
{
	t_list	*tmp;
	int		i;

	tmp = b;
	i = cost_rrr_a(a, b, b->data);
	while (tmp)
	{
		if (i > cost_rr_a(a, b, tmp->data))
			i = cost_rr_a(a, b, tmp->data);
		if (i > cost_rrr_a(a, b, tmp->data))
			i = cost_rrr_a(a, b, tmp->data);
		if (i > cost_ra_rrb_a(a, b, tmp->data))
			i = cost_rra_rb_a(a, b, tmp->data);
		if (i > cost_rra_rb_a(a, b, tmp->data))
			i = cost_rra_rb_a(a, b, tmp->data);
		tmp = tmp->next;
	}
	return (i);
}

// void	initialize_a(t_list **stack_a, t_list **stack_b)
// {
// 	target_a(*stack_a, (*stack_b)->data);
// 	cost_a(*stack_a, *stack_b);
// }
