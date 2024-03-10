/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_initialize.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:00:46 by murathanelc       #+#    #+#             */
/*   Updated: 2024/03/10 16:23:21 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	ft_atoi_long(char *s)
{
	int		i;
	long	result;
	int		sign;

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
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			error();
		result = (result * 10) + (s[i] - 48);
		i++;
	}
	if (result < -2147483648 || result > 2147483647)
		error();
	return (sign * result);
}

void	stack(t_list **a, char **argv)
{
	int	i;
	int	number;

	i = 0;
	if (!a)
		return ;
	while (argv[i])
	{
		number = (int)ft_atoi_long(argv[i]);
		initialize_node(a, number);
		i++;
	}
}
