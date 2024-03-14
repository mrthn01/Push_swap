/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:25:28 by murathanelc       #+#    #+#             */
/*   Updated: 2024/03/13 23:52:54 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;

	a = NULL;
	if (argc > 1)
	{
		if (argc == 2)
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
				ft_error();
				free_stack_a(&a);
			}
			if (!sorted(a))
				check_nodes(&a);
			system("leaks push_swap");
			free_stack_a(&a);
		}
	}
	return (0);
}
