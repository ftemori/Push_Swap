#include "../includes/push_swap.h"

int	ft_determine_alignment_strategy(t_stack *a, t_stack *b)
{
	int		cost;
	t_stack	*tmp;

	tmp = b;
	cost = ft_case_rrarrb(a, b, b->value);
	while (tmp)
	{
		if (cost > ft_case_rarb(a, b, tmp->value))
			cost = ft_case_rarb(a, b, tmp->value);
		if (cost > ft_case_rrarrb(a, b, tmp->value))
			cost = ft_case_rrarrb(a, b, tmp->value);
		if (cost > ft_case_rarrb(a, b, tmp->value))
			cost = ft_case_rarrb(a, b, tmp->value);
		if (cost > ft_case_rrarb(a, b, tmp->value))
			cost = ft_case_rrarb(a, b, tmp->value);
		tmp = tmp->next;
	}
	return (cost);
}

void	ft_sort_three(t_stack **stack_a)
{
	if (ft_min(*stack_a) == (*stack_a)->value)
	{
		ft_rra(stack_a, 0);
		ft_sa(stack_a, 0);
	}
	else if (ft_max(*stack_a) == (*stack_a)->value)
	{
		ft_ra(stack_a, 0);
		if (!ft_check_sorted(*stack_a))
			ft_sa(stack_a, 0);
	}
	else
	{
		if (ft_find_index(*stack_a, ft_max(*stack_a)) == 1)
			ft_rra(stack_a, 0);
		else
			ft_sa(stack_a, 0);
	}
}

t_stack	*ft_sort_2b(t_stack **stack_a)
{
	t_stack	*stack_b;

	stack_b = 0;
	while (ft_lstsize_ps(*stack_a) > 3 && !ft_check_sorted(*stack_a))
		ft_pb(stack_a, &stack_b, 0);
	if (!ft_check_sorted(*stack_a))
		ft_sort_three(stack_a);
	return (stack_b);
}

t_stack	**ft_sort_2a(t_stack **stack_a, t_stack **stack_b)
{
	int		cost;
	t_stack	*tmp;

	while (*stack_b)
	{
		tmp = *stack_b;
		cost = ft_determine_alignment_strategy(*stack_a, *stack_b);
		while (cost >= 0)
		{
			if (cost == ft_case_rarb(*stack_a, *stack_b, tmp->value))
				cost = ft_apply_rarb(stack_a, stack_b, tmp->value);
			else if (cost == ft_case_rarrb(*stack_a, *stack_b, tmp->value))
				cost = ft_apply_rarrb(stack_a, stack_b, tmp->value);
			else if (cost == ft_case_rrarrb(*stack_a, *stack_b, tmp->value))
				cost = ft_apply_rrarrb(stack_a, stack_b, tmp->value);
			else if (cost == ft_case_rrarb(*stack_a, *stack_b, tmp->value))
				cost = ft_apply_rrarb(stack_a, stack_b, tmp->value);
			else
				tmp = tmp->next;
		}
	}
	return (stack_a);
}

void	ft_sort(t_stack **stack_a)
{
	t_stack	*stack_b;
	int		min_index;
	int		min_val;

	stack_b = NULL;
	if (ft_lstsize_ps(*stack_a) == 2)
		ft_sa(stack_a, 0);
	else
	{
		stack_b = ft_sort_2b(stack_a);
		ft_sort_2a(stack_a, &stack_b);
		min_val = ft_min(*stack_a);
		min_index = ft_find_index(*stack_a, min_val);
		if (min_index < ft_lstsize_ps(*stack_a) / 2)
		{
			while ((*stack_a)->value != min_val)
				ft_ra(stack_a, 0);
		}
		else
		{
			while ((*stack_a)->value != min_val)
				ft_rra(stack_a, 0);
		}
	}
}
