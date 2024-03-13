/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:24:06 by murathanelc       #+#    #+#             */
/*   Updated: 2024/03/12 21:38:42 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	cost_rr_b(t_list *stack_a, t_list *stack_b, int number)
{
	int	i;

	i = target_b(stack_b, number);
	if (i < ft_index(stack_a, number))
		i = ft_index(stack_a, number);
	return (i);
}

int	cost_rrr_b(t_list *stack_a, t_list *stack_b, int number)
{
	int	i;

	i = 0;
	if (target_b(stack_b, number))
		i = ft_count_list(stack_b) - target_b(stack_b, number);
	if (i < (ft_count_list(stack_a) - ft_index(stack_a, number))
			&& ft_index(stack_a, number))
		i = ft_count_list(stack_a) - ft_index(stack_a, number);
	return (i);
}

int	cost_rb_rra_b(t_list *stack_a, t_list *stack_b, int number)
{
	int	i;

	i = 0;
	if (ft_index(stack_a, number))
		i = ft_count_list(stack_a) - ft_index(stack_a, number);
	i = target_b(stack_b, number) + i;
	return (i);
}

int	cost_rrb_ra_b(t_list *stack_a, t_list *stack_b, int number)
{
	int	i;

	i = 0;
	if (target_b(stack_b, number))
		i = ft_count_list(stack_b) - target_b(stack_b, number);
	i = ft_index(stack_a, number) + i;
	return (i);
}

int	cost_b(t_list *stack_a, t_list *stack_b)
{
	t_list	*tmp;
	int		i;

	tmp = stack_a;
	i = cost_rrr_b(stack_a, stack_b, stack_a->data);
	while (tmp)
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
