/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 22:09:16 by murathanelc       #+#    #+#             */
/*   Updated: 2024/03/10 16:18:04 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}

void	free_stack_a(t_list **tail)
{
	t_list	*current;

	if (!tail)
		return ;
	current = *tail;
	while (current->next != NULL)
	{
		current = current->next;
		free(current->prev);
	}
	free(current);
	*tail = NULL;
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

int	check_number(t_list **tail)
{
	t_list	*current;

	if (!tail)
		return (1);
	current = (*tail)->next;
	while (current->next != NULL)
	{
		if ((*tail)->data == current->data)
			return (1);
		current = current->next;
	}
	return (0);
}

int	ft_isdigit(const char c)
{
	return (c >= 48 && c <= 57);
}
