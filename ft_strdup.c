/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-m <rlopez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:18:34 by rlopez-m          #+#    #+#             */
/*   Updated: 2022/01/12 14:40:36 by rlopez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		s_len;
	char	*ptrs;

	s_len = ft_strlen(s1);
	ptrs = malloc((s_len + 1) * sizeof(char));
	if (!ptrs)
		return (0);
	ft_memcpy(ptrs, s1, s_len);
	ptrs[s_len] = '\0';
	return (ptrs);
}
