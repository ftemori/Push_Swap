/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:02:48 by ebae              #+#    #+#             */
/*   Updated: 2022/12/16 16:03:28 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	value;

	if (size == 0)
		return (ft_strlen(src));
	else if (size < ft_strlen(dst))
		value = ft_strlen(src) + size;
	else
		value = ft_strlen(src) + ft_strlen(dst);
	dst_len = ft_strlen(dst);
	src_len = 0;
	while (src[src_len] && dst_len + 1 < size)
	{
		dst[dst_len] = src[src_len];
		src_len++;
		dst_len++;
	}
	dst[dst_len] = '\0';
	return (value);
}
