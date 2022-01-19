/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-m <rlopez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 19:06:13 by rlopez-m          #+#    #+#             */
/*   Updated: 2022/01/16 20:50:07 by rlopez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*cs1;
	unsigned char	*cs2;

	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	while (n && *cs1 && (*cs1 == *cs2))
	{
		++cs1;
		++cs2;
		--n;
	}
	if (!n)
		return (0);
	else
		return (*cs1 - *cs2);
}
