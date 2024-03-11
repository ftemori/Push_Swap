#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;

	stack_a = ft_validate_input(argc, argv);
	if (!stack_a || ft_check_duplicate(stack_a))
	{
		ft_free_stack(&stack_a);
		return (1);
	}
	if (!ft_check_sorted(stack_a))
		ft_sort(&stack_a);
	ft_free_stack(&stack_a);
	return (0);
}
