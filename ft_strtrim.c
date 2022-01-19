/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-m <rlopez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:24:40 by rlopez-m          #+#    #+#             */
/*   Updated: 2022/01/19 21:53:28 by rlopez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (ft_strchr(set, s1[i]) && s1[i] != '\0')
		i++;
	j = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[j]) && j != 0)
			j--;
	if ((int)(j - i + 1) <= 0)
		return (ft_calloc(1, 1));
	return (ft_substr(s1, i, (j - i + 1)));
}
