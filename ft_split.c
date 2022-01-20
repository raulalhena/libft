/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-m <rlopez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 11:27:12 by rlopez-m          #+#    #+#             */
/*   Updated: 2022/01/20 18:12:13 by rlopez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	**ft_free_arr(char **s, size_t arr_len)
{
	while (arr_len--)
		free(s[arr_len]);
	free(s);
	return (NULL);
}

static char	*ft_str_alloc(char **strs, size_t arr_len, size_t str_len)
{
	strs[arr_len] = (char *) malloc(sizeof(char) * (str_len + 1));
	if (!strs[arr_len])
	{
		ft_free_arr(strs, arr_len);
		return (NULL);
	}
	return (strs[arr_len]);
}

static size_t	ft_arr_len(char *s, char c)
{
	size_t	n_strs;
	size_t	i;
	size_t	j;

	i = 0;
	n_strs = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			n_strs++;
			j = 0;
			while (s[i + j] != c && s[i + j] != '\0')
				j++;
			i += j - 1;
		}
		i++;
	}
	return (n_strs);
}

static char	*ft_str_len(char *str, char c, size_t *s_len)
{
	size_t	j;

	j = 0;
	while (*str != '\0')
	{
		if (*str != c)
		{
			j = 0;
			while (*(str + j) != c && *(str + j) != '\0')
				j++;
			break ;
		}
		str++;
	}
	*s_len = j;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	a_len;
	size_t	s_len;
	char	**arr;

	if (!s)
		return (NULL);
	i = 0;
	a_len = ft_arr_len((char *)s, c);
	arr = (char **) malloc(sizeof(char *) * (a_len + 1));
	if (!arr)
		return (NULL);
	while (i < a_len)
	{
		s = ft_str_len((char *)s, c, &s_len);
		arr[i] = ft_str_alloc(arr, a_len, s_len);
		ft_strlcpy(arr[i], s, s_len + 1);
		s += s_len;
		i++;
	}
	arr[i] = 0;
	return (arr);
}
