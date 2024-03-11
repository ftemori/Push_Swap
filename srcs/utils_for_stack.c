#include "../includes/push_swap.h"

t_stack	*ft_stacklast(t_stack *stack)
{
	while (stack)
	{
		if (!stack->next)
			return (stack);
		stack = stack->next;
	}
	return (stack);
}

int	ft_add_back(t_stack **stack, t_stack *stack_new)
{
	if (!stack)
		return (0);
	if (!*stack)
		*stack = stack_new;
	else
		(ft_stacklast(*stack))->next = stack_new;
	return (1);
}

t_stack	*ft_lstnew_ints(int content)
{
	t_stack	*new;

	new = malloc(sizeof (t_stack));
	if (!new)
		ft_error();
	new->value = content;
	new->next = NULL;
	return (new);
}

int	ft_lstsize_ps(t_stack *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
