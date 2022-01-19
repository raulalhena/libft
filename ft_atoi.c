/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-m <rlopez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 21:41:47 by rlopez-m          #+#    #+#             */
/*   Updated: 2022/01/19 12:33:20 by rlopez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	ft_is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	if (c == '\f' || c == '\r' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int					c;
	int					neg;
	long long int		res;

	c = 0;
	neg = 1;
	res = 0;
	while (ft_is_space(str[c]))
		c++;
	if (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			neg = -neg;
		c++;
	}
	while (str[c] && ft_isdigit(str[c]))
	{
		res = res * 10 + str[c] - '0';
		if (res < INT_MIN && neg == -1)
			return (0);
		if (res > INT_MAX && neg == 1)
			return (-1);
		c++;
	}
	return (res * neg);
}
