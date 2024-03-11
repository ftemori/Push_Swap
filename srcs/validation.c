#include "../includes/push_swap.h"

t_stack	*get_input_from_string(char **argv)
{
	t_stack	*stack_a;
	char	**split_str;
	int		count;
	int		hold_value;

	stack_a = NULL;
	count = 0;
	split_str = ft_split(argv[1], ' ');
	while (split_str[count])
	{
		hold_value = ft_atoi_pushswap(split_str[count]);
		ft_add_back(&stack_a, ft_lstnew_ints(hold_value));
		count++;
	}
	ft_free_2d(split_str);
	return (stack_a);
}

t_stack	*ft_validate_input(int argc, char **argv)
{
	t_stack	*stack_a;
	int		count;
	int		hold_value;

	count = 1;
	stack_a = NULL;
	if (argc < 2)
		ft_error();
	else if (argc == 2)
		stack_a = get_input_from_string(argv);
	else
	{
		while (count < argc)
		{
			hold_value = ft_atoi_pushswap(argv[count]);
			ft_add_back(&stack_a, ft_lstnew_ints(hold_value));
			count++;
		}
	}
	return (stack_a);
}

// ./push_swap "1 4 2 5 a"

int	ft_check_duplicate(t_stack *stack)
{
	t_stack	*tmp;

	while (stack)
	{
		tmp = stack->next;
		while (tmp)
		{
			if (stack->value == tmp->value)
				ft_error();
			tmp = tmp->next;
		}
		stack = stack->next;
	}
	return (0);
}

int	ft_check_sorted(t_stack *stack)
{
	int	i;

	i = stack->value;
	while (stack)
	{
		if (i > stack->value)
			return (0);
		i = stack->value;
		stack = stack->next;
	}
	return (1);
}
