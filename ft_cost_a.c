/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 23:31:37 by murathanelc       #+#    #+#             */
/*   Updated: 2024/03/12 22:20:59 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	cost_rr_a(t_list *a, t_list *b, int number)
{
	int	i;

	i = target_a(a, number);
	if (i < ft_index(b, number))
		i = ft_index(b, number);
	return (i);
}

int	cost_rrr_a(t_list *a, t_list *b, int number)
{
	int	i;

	i = 0;
	if (target_a(a, number))
		i = ft_count_list(a) - target_a(a, number);
	if ((i < ft_count_list(b) - ft_index(b, number)) && ft_index(b, number))
		i = ft_count_list(b) - ft_index(b, number);
	return (i);
}

int	cost_ra_rrb_a(t_list *a, t_list *b, int number)
{
	int	i;

	i = 0;
	if (ft_index(b, number))
		i = ft_count_list(b) - ft_index(b, number);
	i = target_a(a, number) + i;
	return (i);
}

int	cost_rra_rb_a(t_list *a, t_list *b, int number)
{
	int	i;

	i = 0;
	if (target_a(a, number))
		i = ft_count_list(a) - target_a(a, number);
	i = ft_index(b, number) + i;
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
