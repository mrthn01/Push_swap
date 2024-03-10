/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 23:31:37 by murathanelc       #+#    #+#             */
/*   Updated: 2024/03/10 16:10:43 by murathanelc      ###   ########.fr       */
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
	if ((i < (ft_count_list(b) - ft_index(b, number))) && ft_index(b, number))
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
	if (ft_index(a, number))
		i = ft_count_list(a) - ft_index(a, number);
	i = ft_index(b, number) + i;
	return (i);
}
