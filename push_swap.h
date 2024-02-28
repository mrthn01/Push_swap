/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:16:17 by murathanelc       #+#    #+#             */
/*   Updated: 2024/02/28 22:57:09 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
	struct s_list	*prev;
	struct s_list	*next;
	int				data;
}	t_list;

void	initialize_node(t_list **node, int data);
t_list	*ft_lstlast(t_list *lst);
void	add_front(t_list **tail, int value);
void	delete_node(t_list *node);
void	swap(t_list **tail);
void	rotate(t_list **tail);
void	ft_reverse_rotate(t_list **tail);
int		ft_count_list(t_list *node);
void	push(t_list **dest, t_list	**src);
char	**ft_split(char const *s, char c);
void	stack(t_list **a, char **argv);
void	ra(t_list **a);
void	rb(t_list **b);
void	sa(t_list **a);
void	sb(t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **b, t_list **a);
void	ra(t_list **a);
void	rb(t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);

#endif