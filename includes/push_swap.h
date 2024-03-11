/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <eddybae@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:45:36 by eddybae           #+#    #+#             */
/*   Updated: 2023/08/08 18:45:36 by eddybae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

# include "../libft/libft.h"

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;

// MAIN
int		main(int argc, char **argv);

// input validation
t_stack	*ft_validate_input(int argc, char **argv);
t_stack	*get_input_from_string(char **argv);
int		ft_check_duplicate(t_stack *stack);
int		ft_check_sorted(t_stack *stack);

// operations
void	ft_sa(t_stack **stack_a, int count);
void	ft_sb(t_stack **stack_b, int count);
void	ft_ss(t_stack **stack_a, t_stack **stack_b, int count);
void	ft_pa(t_stack **stack_a, t_stack **stack_b, int count);
void	ft_pb(t_stack **stack_a, t_stack **stack_b, int count);
void	ft_ra(t_stack **stack_a, int count);
void	ft_rb(t_stack **stack_b, int count);
void	ft_rr(t_stack **stack_a, t_stack **stack_b, int count);
void	ft_rra(t_stack **stack_a, int count);
void	ft_rrb(t_stack **stack_b, int count);
void	ft_rrr(t_stack **stack_a, t_stack **stack_b, int count);

//sorting algorithm
void	ft_sort(t_stack **stack_a);
void	ft_sort_three(t_stack **stack_a);
t_stack	**ft_sort_2a(t_stack **stack_a, t_stack **stack_b);
t_stack	*ft_sort_2b(t_stack **stack_a);
int		ft_determine_alignment_strategy(t_stack *a, t_stack *b);

// utils_general
int		ft_atoi_pushswap(const char *str);
void	ft_error(void);

//util_frees
void	*ft_free_2d(char **field_array);
void	ft_free_stack(t_stack **lst);

// utils for stack
t_stack	*ft_stacklast(t_stack *stack);
int		ft_add_back(t_stack **stack, t_stack *stack_new);
t_stack	*ft_lstnew_ints(int content);
int		ft_lstsize_ps(t_stack *lst);
int		ft_min(t_stack *a);
int		ft_max(t_stack *a);
int		ft_find_index(t_stack *stack, int value);
int		ft_find_place_b(t_stack *stack_b, int value_push);
int		ft_find_place_a(t_stack *stack_a, int nbr_push);

// brute force, rotating calculations

int		ft_case_rarb(t_stack *a, t_stack *b, int c);
int		ft_case_rrarrb(t_stack *a, t_stack *b, int c);
int		ft_case_rrarb(t_stack *a, t_stack *b, int c);
int		ft_case_rarrb(t_stack *a, t_stack *b, int c);
// more brute force, actual rotating
int		ft_apply_rarb(t_stack **a, t_stack **b, int c);
int		ft_apply_rrarrb(t_stack **a, t_stack **b, int c);
int		ft_apply_rrarb(t_stack **a, t_stack **b, int c);
int		ft_apply_rarrb(t_stack **a, t_stack **b, int c);

#endif