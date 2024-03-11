/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:24:52 by ebae              #+#    #+#             */
/*   Updated: 2022/12/16 19:24:56 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int index)
{
	size_t	pos;

	pos = ft_strlen(str);
	if ((char )index == 0)
		return ((char *)str + pos);
	while (pos-- > 0)
	{
		if (*(str + pos) == (char )index)
			return ((char *)str + pos);
	}
	return (NULL);
}

// char	*ft_strrchr(const char *str, int c)
// {
// 	size_t	i;

// 	i = ft_strlen(str);
// 	if ((unsigned char)c == '\0')
// 		return ((char *)str + i);
// 	while (i-- > 0)
// 	{
// 		if (*(str + i) == (unsigned char)c)
// 			return ((char *)str + i);
// 	}
// 	return ((char *) NULL);
// }