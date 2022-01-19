/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-m <rlopez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:00:03 by rlopez-m          #+#    #+#             */
/*   Updated: 2022/01/19 22:11:02 by rlopez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptrs;
	char	*cpy_s;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	cpy_s = (char *)s + start;
	ptrs = malloc(sizeof(char) * (len + 1));
	if (!ptrs)
		return (NULL);
	if (start < s_len)
		ft_strlcpy(ptrs, cpy_s, len + 1);
	return (ptrs);
}
