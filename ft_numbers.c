/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 22:38:01 by murathanelc       #+#    #+#             */
/*   Updated: 2024/03/10 18:11:12 by murathanelc      ###   ########.fr       */
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

int	ft_index(t_list *node, int number)
{
	int	i;

	i = 0;
	if (!node)
		return (0);
	while (node->data != number)
	{
		i++;
		node = node->next;
	}
	return (i);
}
