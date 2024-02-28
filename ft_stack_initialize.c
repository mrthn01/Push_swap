/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_initialize.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:00:46 by murathanelc       #+#    #+#             */
/*   Updated: 2024/02/28 23:03:02 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_atoi(const char *s)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = (result * 10) + (s[i] - 48);
		i++;
	}
	return (sign * result);
}

void	stack(t_list **a, char **argv)
{
	int	i;
	int	number;

	i = 0;
	while (argv[i])
	{
		number = ft_atoi(argv[i]);
		initialize_node(a, number);
		printf("%d node is %d\n", i + 1, number);
		i++;
	}
}
