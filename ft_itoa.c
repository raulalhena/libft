/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-m <rlopez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 22:26:03 by rlopez-m          #+#    #+#             */
/*   Updated: 2022/01/21 18:07:52 by rlopez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digit(long int n)
{
	if (n < 0)
		return (1 + ft_count_digit(-n));
	if (n / 10 == 0)
		return (1);
	else
		return (1 + ft_count_digit(n / 10));
}

static void	ft_fill_str(char *str, long int n, long int n_len)
{
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	if (n >= 10)
		ft_fill_str(str, (n / 10), (n_len - 1));
	str[n_len] = (n % 10) + '0';
}

char	*ft_itoa(int n)
{
	long int	n_len;
	char		*str;

	n_len = ft_count_digit(n);
	str = (char *)malloc(sizeof(char) * (n_len + 1));
	if (!str)
		return (NULL);
	str[n_len--] = '\0';
	ft_fill_str(str, n, n_len);
	return (str);
}
