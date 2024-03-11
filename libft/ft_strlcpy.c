/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:33:29 by ebae              #+#    #+#             */
/*   Updated: 2022/12/16 19:24:30 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 1. copy dst 2 src up to size - 1, and add a NUll at the end.
// return the size of src
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	pos;
	size_t	src_len;

	pos = 0;
	src_len = ft_strlen(src);
	while (src[pos] && pos + 1 < size)
	{
		dst[pos] = src[pos];
		pos++;
	}
	if (size)
		dst[pos] = '\0';
	return (src_len);
}
