#include "../includes/push_swap.h"

void	*ft_free_2d(char **field_array)
{
	int	i;

	i = 0;
	while (field_array[i])
	{
		free(field_array[i]);
		i++;
	}
	free(field_array);
}

void	ft_free_stack(t_stack **lst)
{
	t_stack	*tmp;

	if (!lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		(*lst)->value = 0;
//		(*lst)->index = 0;
		free(*lst);
		*lst = tmp;
	}
}
