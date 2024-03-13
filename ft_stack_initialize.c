/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_initialize.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:00:46 by murathanelc       #+#    #+#             */
/*   Updated: 2024/03/13 16:17:43 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_atoi_long(char *s)
{
	long long int	result;
	int				sign;

	result = 0;
	sign = 1;
	while ((*s >= 9 && *s <= 13) || *s == 32)
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}
	while (*s)
	{
		if (!ft_isdigit(*s))
			ft_error();
		result = (result * 10) + (*s - 48);
		s++;
	}
	if (sign * result < -2147483648 || sign * result > 2147483647)
		ft_error();
	return (sign * result);
}

void	stack(t_list **a, char **argv)
{
	int		i;
	int		number;

	i = 0;
	if (!a)
		return ;
	while (argv[i])
	{
		number = ft_atoi_long(argv[i]);
		initialize_node(a, number);
		i++;
	}
}
