/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-m <rlopez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 21:25:35 by rlopez-m          #+#    #+#             */
/*   Updated: 2022/01/19 22:06:51 by rlopez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	size_t	n_i;
	size_t	h_i;

	if (need[0] == '\0')
		return ((char *)hay);
	h_i = 0;
	while (hay[h_i] != '\0' && h_i < len)
	{
		n_i = 0;
		while (hay[h_i + n_i] == need[n_i] && (h_i + n_i) < len)
		{
			if (need[n_i + 1] == '\0')
				return ((char *)&hay[h_i]);
			n_i++;
		}
		h_i++;
	}
	return (NULL);
}
