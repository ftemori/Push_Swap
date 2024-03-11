/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:25:37 by ebae              #+#    #+#             */
/*   Updated: 2023/01/06 16:02:58 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *ned, size_t len)
{
	size_t	pos;

	if (*ned == '\0')
		return ((char *)hay);
	pos = ft_strlen((char *)ned);
	while (*hay != '\0' && len-- >= pos)
	{
		if (*hay == *ned && ft_memcmp(hay, ned, pos) == 0)
		{
			return ((char *)hay);
		}
		hay++;
	}
	return (0);
}
