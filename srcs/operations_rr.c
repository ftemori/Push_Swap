#include "../includes/push_swap.h"

void	ft_rra(t_stack **stack_a, int count)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	tmp = *stack_a;
	tmp2 = *stack_a;
	while (tmp->next->next)
		tmp = tmp->next;
	*stack_a = tmp->next;
	tmp->next = NULL;
	(*stack_a)->next = tmp2;
	if (count == 0)
		write(1, "rra\n", 4);
}

void	ft_rrb(t_stack **stack_b, int count)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	tmp = *stack_b;
	tmp2 = *stack_b;
	while (tmp->next->next)
		tmp = tmp->next;
	*stack_b = tmp->next;
	tmp->next = NULL;
	(*stack_b)->next = tmp2;
	if (count == 0)
		write(1, "rrb\n", 4);
}

void	ft_rrr(t_stack **stack_a, t_stack **stack_b, int count)
{
	ft_rra(stack_a, 1);
	ft_rrb(stack_b, 1);
	if (count == 0)
		write(1, "rrr\n", 4);
}
