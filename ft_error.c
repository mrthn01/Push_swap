/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 22:09:16 by murathanelc       #+#    #+#             */
/*   Updated: 2024/03/15 23:45:34 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	free_stack_a(t_list **tail)
{
	t_list	*current;

	if (!tail)
		return ;
	while (*tail)
	{
		current = (*tail)->next;
		free(*tail);
		*tail = current;
	}
	tail = NULL;
}

void	free_split(char **argv)
{
	int	i;

	i = 0;
	if (NULL == argv || NULL == *argv)
		return ;
	while (argv[i])
	{
		free(argv[i]);
		i++;	
	}
	free(argv);
}

int	check_number(t_list *tail)
{
	t_list	*next_node;

	while (tail)
	{
		next_node = tail->next;
		while (next_node)
		{
			if (next_node->data == tail->data)
				return (1);
			next_node = next_node->next;
		}
		tail = tail->next;
	}
	return (0);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
