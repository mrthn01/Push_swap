/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:25:28 by murathanelc       #+#    #+#             */
/*   Updated: 2024/02/28 23:08:37 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	t_list	*current;
	int		i;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (1);
	else if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		stack(&a, argv);
	}
	else
		stack(&a, argv + 1);
	sa(&a);
	current = a;
	printf("after swap\n");
	i = 0;
	while(current)
	{
		printf("%d node is %d\n", i + 1, current->data);
		current = current->next;
	}
	return (0);
}
