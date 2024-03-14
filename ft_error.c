/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 22:09:16 by murathanelc       #+#    #+#             */
/*   Updated: 2024/03/13 21:24:30 by murathanelc      ###   ########.fr       */
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

void	free_split(char **lst)
{
	char	*tmp;

	if (!lst)
		return ;
	while ((*lst) != NULL)
	{
		tmp = *lst;
		lst++;
		free(tmp);
	}
	*lst = NULL;
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
