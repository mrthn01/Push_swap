/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 22:38:01 by murathanelc       #+#    #+#             */
/*   Updated: 2024/03/12 22:47:25 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	maximum_number(t_list *node)
{
	int	max_number;

	max_number = node->data;
	while (node->next != NULL)
	{
		if (max_number < node->next->data)
			max_number = node->next->data;
		node = node->next;
	}
	return (max_number);
}

int	minimum_number(t_list *node)
{
	int	min_number;

	min_number = node->data;
	while (node->next != NULL)
	{
		if (node->next->data < min_number)
			min_number = node->data;
		node = node->next;
	}
	return (min_number);
}

int	ft_index(t_list *node, int number)
{
	int	i;

	i = 0;
	while (node->data != number)
	{
		i++;
		node = node->next;
	}
	return (i);
}

int	ft_count_list(t_list *node)
{
	int	i;

	i = 0;
	while (node)
	{
		node = node->next;
		i++;
	}
	return (i);
}
