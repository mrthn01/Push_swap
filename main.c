/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:25:28 by murathanelc       #+#    #+#             */
/*   Updated: 2024/03/15 22:14:02 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;

	a = NULL;
	if (argc > 1)
	{
		stack(&a, argc, argv);
		if (!a || check_number(a))
		{
			free_stack_a(&a);
			ft_error();
		}
		if (!sorted(a))
			check_nodes(&a);
		system("leaks push_swap");
		free_stack_a(&a);
	}
	return (0);
}
