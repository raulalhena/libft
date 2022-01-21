/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-m <rlopez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:53:08 by rlopez-m          #+#    #+#             */
/*   Updated: 2022/01/21 18:08:14 by rlopez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*cpy_dst;
	const char	*cpy_src;
	size_t		i;

	i = 0;
	cpy_dst = (char *)dst;
	cpy_src = (char *)src;
	if (cpy_dst == 0 && cpy_src == 0)
		return (NULL);
	while (i < n)
	{
		cpy_dst[i] = cpy_src[i];
		i++;
	}
	return (dst);
}
