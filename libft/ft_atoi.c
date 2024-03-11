/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:22:08 by ebae              #+#    #+#             */
/*   Updated: 2023/08/09 19:40:24 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

// while (str[pos] == ' ' || (str[pos] <= '\r' && str[pos] >= '\0'))
	// 	pos++;

int	ft_atoi(const char *str)
{
	int	sign;
	int	sum;
	int	pos;

	sign = 1;
	sum = 0;
	pos = 0;
	while (str[pos] == ' ' || str[pos] == '\f' || str[pos] == '\n'
		|| str[pos] == '\r' || str[pos] == '\t' || str[pos] == '\v')
		pos++;
	if (str[pos] == '+' || str[pos] == '-')
	{
		if (str[pos] == '-')
			sign = -1;
		pos++;
	}
	while (str[pos] >= '0' && str[pos] <= '9')
	{
		sum *= 10;
		sum += str[pos] - '0';
		pos++;
	}
	return (sign * sum);
}

/*
1. check if input char is whitespace
2. check for + or -, when - do following
3. count numbers
*/