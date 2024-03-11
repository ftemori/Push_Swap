#include "../includes/push_swap.h"

void	ft_ra(t_stack **stack_a, int count)
{
	t_stack	*tmp;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	tmp = *stack_a;
	*stack_a = ft_stacklast(*stack_a);
	(*stack_a)->next = tmp;
	*stack_a = tmp->next;
	tmp->next = NULL;
	if (count == 0)
		write(1, "ra\n", 3);
}

void	ft_rb(t_stack **stack_b, int count)
{
	t_stack	*tmp;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	tmp = *stack_b;
	*stack_b = ft_stacklast(*stack_b);
	(*stack_b)->next = tmp;
	*stack_b = tmp->next;
	tmp->next = NULL;
	if (count == 0)
		write(1, "rb\n", 3);
}

void	ft_rr(t_stack **stack_a, t_stack **stack_b, int count)
{
	ft_ra(stack_a, 1);
	ft_rb(stack_b, 1);
	if (count == 0)
		write(1, "rr\n", 3);
}
