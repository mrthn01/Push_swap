/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:24:06 by murathanelc       #+#    #+#             */
/*   Updated: 2024/03/10 16:51:36 by murathanelc      ###   ########.fr       */
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
	if (i < (ft_count_list(stack_a) - ft_index(stack_a, number)
			&& ft_index(stack_a, number)))
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
	if (ft_index(stack_b, number))
		i = ft_count_list(stack_b) - ft_index(stack_b, number);
	i = ft_index(stack_a, number) + i;
	return (i);
}
