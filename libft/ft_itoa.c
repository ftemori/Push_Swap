/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 13:42:07 by ebae              #+#    #+#             */
/*   Updated: 2023/01/11 13:30:28 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

// if only using < it does not recognize case 0 input.
int	ft_len_o_num(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

// using bitwise operation ^ XOR, you can swap 2 variables with no temp
// its magic
static	char	*ft_rev_str(char *str)
{
	int	start;
	int	final;

	start = 0;
	final = ft_strlen(str) - 1;
	while (start < final - start)
	{
		str[start] = str[start] ^ str[final - start];
		str[final - start] = str[start] ^ str[final - start];
		str[start] = str[start] ^ str[final - start];
		start++;
	}
	return (str);
}

char	*ft_itoa(int nb)
{
	int			i;
	long int	sign;
	long int	nb_edit;
	char		*str;

	i = 0;
	sign = 0;
	nb_edit = (long int)nb;
	str = (char *)ft_calloc((ft_len_o_num(nb_edit) + 1), sizeof(char));
	if (str == NULL)
		return (NULL);
	if (nb_edit == 0)
		str[i++] = '0';
	if (nb_edit < 0)
		nb_edit *= --sign;
	while (nb_edit > 0)
	{
		str[i++] = (nb_edit % 10) + '0';
		nb_edit /= 10;
	}
	if (sign)
		str[i++] = '-';
	str[i] = '\0';
	return (str = ft_rev_str(str));
}

// itoa:
/*
	nb becomes long int because of the MIN_VAL
	calloc is used to allocated memory for new char string
	ft_len_o_num returns the length of number
	- num is 0: set char to 0 and increment i by 1
	- num is -: set sign to -1, multiply number with -1 and add "-"
	go thru number position and put into new string,
	return the reverse of str, since my function finds num value in reverse
*/