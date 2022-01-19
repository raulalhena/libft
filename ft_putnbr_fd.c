/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-m <rlopez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 20:06:21 by rlopez-m          #+#    #+#             */
/*   Updated: 2022/01/19 20:55:05 by rlopez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	n_cpy;
	int	c;

	if (n <= INT_MIN)
		write(fd, "-2147483648", 11);
	else
	{
		n_cpy = n;
		c = 1;
		while (n % 10 != 0)
		{
			n /= 10;
			c++;
		}
		write(fd, ft_itoa(n_cpy), c);
	}
}
