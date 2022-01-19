/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-m <rlopez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 18:45:41 by rlopez-m          #+#    #+#             */
/*   Updated: 2022/01/16 14:59:36 by rlopez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s_cpy;
	char	*ptr;

	ptr = NULL;
	s_cpy = (char *)s;
	while (*(s_cpy))
	{
		if (*s_cpy == (char)c)
			ptr = s_cpy;
		s_cpy++;
	}
	if (*s_cpy == (char)c)
		return (s_cpy);
	return (ptr);
}
