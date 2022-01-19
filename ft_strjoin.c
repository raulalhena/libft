/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-m <rlopez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:18:36 by rlopez-m          #+#    #+#             */
/*   Updated: 2022/01/19 22:17:42 by rlopez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t			s1_len;
	size_t			s2_len;
	size_t			new_len;
	char			*ptrs;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_len = s1_len + s2_len;
	ptrs = malloc(sizeof(unsigned char) * (new_len + 1));
	if (!ptrs)
		return (0);
	ft_strlcpy(ptrs, s1, s1_len + 1);
	ft_strlcat(ptrs, s2, new_len + 1);
	return (ptrs);
}
