/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:24:53 by ebae              #+#    #+#             */
/*   Updated: 2023/01/11 13:42:10 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// apply function and iterate thru the list

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
	{
		return ;
	}
	while (lst)
	{
		(*f)(lst -> content);
		lst = lst -> next;
	}
}

// apply function 
// then move on