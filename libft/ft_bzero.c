/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddybae <eddybae@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:14:26 by ebae              #+#    #+#             */
/*   Updated: 2023/01/10 17:26:45 by eddybae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

#include "libft.h"

void	ft_bzero(void *str, size_t size)
{
	char	*ptr_str;

	size -= 1;
	ptr_str = (char *)str;
	while (size + 1)
	{
		ptr_str[size] = '\0';
		size--;
	}
}

//	replace with 0 until size the bytes of the pointer