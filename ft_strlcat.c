/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-m <rlopez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:37:50 by rlopez-m          #+#    #+#             */
/*   Updated: 2022/01/14 19:18:35 by rlopez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	index_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (dstsize <= len_dst)
		return (dstsize + len_src);
	index_src = 0;
	while (src[index_src] != '\0' && dstsize > (len_dst + 1))
		dst[len_dst++] = src[index_src++];
	dst[len_dst] = '\0';
	return (len_dst + ft_strlen((char *)(&src[index_src])));
}
