/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddybae <eddybae@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:28:08 by ebae              #+#    #+#             */
/*   Updated: 2023/01/10 19:10:31 by eddybae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *str, int index, size_t size)
{
	size_t			pos;
	unsigned char	*ptr_str;
	unsigned char	find;

	pos = 0;
	ptr_str = (unsigned char *)str;
	find = (unsigned char) index;
	while (pos < size)
	{
		if (ptr_str[pos] == find)
			return (&ptr_str[pos]);
		pos++;
	}
	return (NULL);
}

// finds index inside the *str, inside size size_t size
// return the pointer pointing to the location