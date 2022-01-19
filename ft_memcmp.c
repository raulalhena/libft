/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-m <rlopez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 21:07:53 by rlopez-m          #+#    #+#             */
/*   Updated: 2022/01/11 21:21:23 by rlopez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n && s1 && (*(unsigned char *)s1 == *(unsigned char *)s2))
	{
		++s1;
		++s2;
		--n;
	}
	if (!n)
		return (0);
	else
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
