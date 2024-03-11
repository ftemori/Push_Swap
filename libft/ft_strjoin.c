/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eddybae <eddybae@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 20:09:15 by ebae              #+#    #+#             */
/*   Updated: 2023/01/10 18:50:27 by eddybae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	what would be a failure case? - return NULL

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;

	if (!s1 || !s2)
		return (0);
	out = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!out)
	{
		return (0);
	}
	ft_strlcpy(out, s1, ft_strlen(s1) + ft_strlen(s2) + 1);
	ft_strlcat(out, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (out);
}

//strlcpy will copy s1 into out
// strlcat will add s2 to the string filled with s1