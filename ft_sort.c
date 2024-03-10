/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:01:52 by murathanelc       #+#    #+#             */
/*   Updated: 2024/03/10 18:10:20 by murathanelc      ###   ########.fr       */
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

void	more_than_three_number(t_list **a, t_list **b)
{
	int	number_of_nodes;

	number_of_nodes = ft_count_list(*a);
	if (number_of_nodes-- > 3)
		pb(b, a);
	if (number_of_nodes-- > 3)
		pb(b, a);
	if (ft_count_list(*a) > 3 && !sorted(*a))
		move_a_to_b(a, b);
	move_b_to_a(a, b);
	
}

void	check_nodes(t_list **a, t_list **b)
{
	int	i;

	i = ft_count_list(*a);
	if (*a)
	{
		if (i == 2)
		{
			if ((*a)->data > (*a)->next->data)
				sa(a);
		}
		if (i == 3)
			sort_three_numbers(a);
		if (i > 3)
			more_than_three_number(a, b);
	}
}
