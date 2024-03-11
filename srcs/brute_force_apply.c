#include "../includes/push_swap.h"

int	ft_apply_rarb(t_stack **a, t_stack **b, int c)
{
	while ((*b)->value != c && ft_find_place_a(*a, c) > 0)
		ft_rr(a, b, 0);
	while ((*b)->value != c)
		ft_rb(b, 0);
	while (ft_find_place_a(*a, c) > 0)
		ft_ra(a, 0);
	ft_pa(a, b, 0);
	return (-1);
}

int	ft_apply_rrarrb(t_stack **a, t_stack **b, int c)
{
	while ((*b)->value != c && ft_find_place_a(*a, c) > 0)
		ft_rrr(a, b, 0);
	while ((*b)->value != c)
		ft_rrb(b, 0);
	while (ft_find_place_a(*a, c) > 0)
		ft_rra(a, 0);
	ft_pa(a, b, 0);
	return (-1);
}

int	ft_apply_rrarb(t_stack **a, t_stack **b, int c)
{
	while (ft_find_place_a(*a, c) > 0)
		ft_rra(a, 0);
	while ((*b)->value != c)
		ft_rb(b, 0);
	ft_pa(a, b, 0);
	return (-1);
}

int	ft_apply_rarrb(t_stack **a, t_stack **b, int c)
{
	while (ft_find_place_a(*a, c) > 0)
		ft_ra(a, 0);
	while ((*b)->value != c)
		ft_rrb(b, 0);
	ft_pa(a, b, 0);
	return (-1);
}
