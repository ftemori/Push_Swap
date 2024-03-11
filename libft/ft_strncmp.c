/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 18:43:17 by ebae              #+#    #+#             */
/*   Updated: 2023/01/04 13:06:27 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	pos;

	pos = 0;
	while (s1[pos] && s2[pos] && s1[pos] == s2[pos] && pos < n)
		pos++;
	if (pos == n)
		return (0);
	return ((unsigned char )s1[pos] - (unsigned char)s2[pos]);
}

// int		ft_strncmp(const char *s1, const char *s2, size_t n)
// {
// 	size_t	pos;

// 	pos = 0;
// 	while (pos < n)
// 	{
// 		if (s1[pos] != s2[pos])
// 			return (s1[pos] > s2[pos] ? 1 : -1);
// 		else if (s1[pos] == 0)
// 			return (0);
// 		pos++;
// 	}
// 	return (0);
// }