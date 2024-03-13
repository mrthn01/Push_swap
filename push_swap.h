/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:16:17 by murathanelc       #+#    #+#             */
/*   Updated: 2024/03/13 14:35:01 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdbool.h>
# include <limits.h>

typedef struct s_list
{
	struct s_list	*prev;
	struct s_list	*next;
	int				data;
}	t_list;

void	initialize_node(t_list **node, int data);
t_list	*ft_lstlast(t_list *lst);
void	swap(t_list **tail);
void	rotate(t_list **tail);
void	reverse_rotate(t_list **tail);
int		ft_count_list(t_list *node);

char	**ft_split(char const *s, char c);
void	stack(t_list **a, char **argv);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **b, t_list **a);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);
void	sort_three_numbers(t_list **a);
void	free_stack_a(t_list **tail);
int		sorted(t_list *node);
int		target_b(t_list *node_a, int number);
int		target_a(t_list *a, int number);
int		maximum_number(t_list *node);
int		minimum_number(t_list *node);
int		cost_rr_a(t_list *a, t_list *b, int number);
int		cost_rrr_a(t_list *a, t_list *b, int number);
int		cost_ra_rrb_a(t_list *a, t_list *b, int number);
int		cost_rra_rb_a(t_list *a, t_list *b, int number);
int		cost_rr_b(t_list *stack_a, t_list *stack_b, int number);
int		cost_rrr_b(t_list *stack_a, t_list *stack_b, int number);
int		cost_rb_rra_b(t_list *stack_a, t_list *stack_b, int number);
int		cost_rrb_ra_b(t_list *stack_a, t_list *stack_b, int number);
int		cost_b(t_list *stack_a, t_list *stack_b);
int		cost_a(t_list *a, t_list *b);
int		rr_a(t_list **stack_a, t_list **stack_b, int number);
int		rrr_a(t_list **stack_a, t_list **stack_b, int number);
int		rra_rb_a(t_list **stack_a, t_list **stack_b, int number);
int		ra_rrb_a(t_list **stack_a, t_list **stack_b, int number);
int		rr_b(t_list **stack_a, t_list **stack_b, int number);
int		rrr_b(t_list **stack_a, t_list **stack_b, int number);
int		rrb_ra_b(t_list **stack_a, t_list **stack_b, int number);
int		rb_rra_b(t_list **stack_a, t_list **stack_b, int number);
void	move_a_to_b(t_list **stack_a, t_list **stack_b);
t_list	**move_b_to_a(t_list **stack_a, t_list **stack_b);
void	ft_error(void);
int		ft_isdigit(int c);
void	free_split(char **lst);
int		check_number(t_list *tail);
int		sorted(t_list *node);
void	check_nodes(t_list **a);
void	sort_three_numbers(t_list **a);
t_list	*more_than_three_number(t_list **a);
int		ft_index(t_list *node, int number);

#endif