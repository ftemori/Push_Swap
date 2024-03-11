#include "../includes/push_swap.h"

void	ft_sa(t_stack **stack_a, int count)
{
	t_stack	*tmp;

	if (!*stack_a || !((*stack_a)->next))
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = (*stack_a)->next;
	(*stack_a)->next = tmp;
	if (count == 0)
		write(1, "sa\n", 3);
}

void	ft_sb(t_stack **stack_b, int count)
{
	t_stack	*tmp;

	if (!*stack_b || !((*stack_b)->next))
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = (*stack_b)->next;
	(*stack_b)->next = tmp;
	if (count == 0)
		write(1, "sb\n", 3);
}

void	ft_ss(t_stack **stack_a, t_stack **stack_b, int count)
{
	ft_sa(stack_a, 1);
	ft_sb(stack_b, 1);
	if (count == 0)
		write(1, "ss\n", 3);
}

void	ft_pa(t_stack **stack_a, t_stack **stack_b, int count)
{
	t_stack	*tmp;

	if (!*stack_b)
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = *stack_a;
	*stack_a = tmp;
	if (count == 0)
		write(1, "pa\n", 3);
}

void	ft_pb(t_stack **stack_a, t_stack **stack_b, int count)
{
	t_stack	*tmp;

	if (!*stack_a)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = *stack_b;
	*stack_b = tmp;
	if (count == 0)
		write(1, "pb\n", 3);
}
