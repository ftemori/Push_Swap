/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:59:53 by ebae              #+#    #+#             */
/*   Updated: 2022/12/16 14:51:06 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

/*
int main(int argc, char const *argv[])
{
	printf("ft\t%zu\n", ft_strlen(argv[1]));
	printf("lib\t%li\n", strlen(argv[1]));
	return (0);
}
*/