/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:49:05 by ebae              #+#    #+#             */
/*   Updated: 2023/01/11 13:38:46 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// new node is added to the beginning of the list

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (*lst)
		{
			new -> next = *lst;
		}
		*lst = new;
	}
}

/*	visual represenation

		[new] 
		n1 - n2 - n3 - n4 - n5 ...
	change n1 

	// next tag of new node becomes lst
	// head of lst gets new

*/