/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:25:28 by murathanelc       #+#    #+#             */
/*   Updated: 2024/03/13 16:24:50 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;

	a = NULL;
	if (argc == 1)
		return (1);
	else if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		stack(&a, argv);
		if (!a)
			ft_error();
	}
	else
	{
		stack(&a, argv + 1);
		if (!a || check_number(a))
		{
			free_stack_a(&a);
			ft_error();
		}
	}
	system("leaks push_swap");
	check_nodes(&a);
	free_stack_a(&a);
	return (0);
}
