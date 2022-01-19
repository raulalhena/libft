/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-m <rlopez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:39:13 by rlopez-m          #+#    #+#             */
/*   Updated: 2022/01/14 18:57:04 by rlopez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*mdst;

	mdst = dst;
	if ((char *)src < (char *) dst)
	{
		while (len--)
			*(mdst + len) = *((char *) src + len);
	}
	else if ((char *)dst < (char *) src)
	{
		while (len--)
			*(mdst++) = *((char *) src++);
	}
	return (dst);
}
