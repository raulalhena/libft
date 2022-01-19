/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-m <rlopez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 11:54:57 by rlopez-m          #+#    #+#             */
/*   Updated: 2022/01/16 14:48:46 by rlopez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	char	*cpy_dst;
	char	*cpy_src;

	cpy_dst = dst;
	cpy_src = (char *)src;
	srcsize = ft_strlen(cpy_src);
	if (!src)
		return (srcsize);
	if (dstsize)
	{
		while (dstsize-- > 1 && *cpy_src != '\0')
			*(cpy_dst++) = *(cpy_src++);
		*cpy_dst = '\0';
	}
	return (srcsize);
}
