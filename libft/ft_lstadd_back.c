/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:07:47 by ebae              #+#    #+#             */
/*   Updated: 2023/08/09 18:43:01 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst)
	{
		if (*lst)
		{
			last = ft_lstlast(*lst);
			last -> next = new;
		}
		else
			*lst = new;
	}
}

//Adds node ’new’ at the end of the list.
/*
	define new structure node called last.
	if check node exists:
	if check node value is filled: 
	if so, find last node with ft_lstlast and next points to 'new'
	if no, make new the head node.

	both lst and *lst if is necessary.
	lst checks if its a null pointer
	and *lst checks if the list is empty
*/