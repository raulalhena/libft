/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-m <rlopez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 11:27:12 by rlopez-m          #+#    #+#             */
/*   Updated: 2022/01/19 19:18:56 by rlopez-m         ###   ########.fr       */
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

static size_t	ft_count_strs(char const *s, char c)
{
	size_t	n_strs;
	int		i;

	n_strs = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			n_strs++;
			while (s[i] != c)
				i++;
		}
		i++;
	}
	return (n_strs);
}

static char	**ft_arr_alloc(char **strs, size_t arr_len)
{
	strs = (char **) malloc(sizeof(char *) * (arr_len + 1));
	if (!strs)
		return (ft_free_arr(strs, arr_len));
	return (strs);
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

static int	ft_str_len(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			break ;
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**arr;
	int		s_len;
	size_t	n_strs;

	i = 0;
	n_strs = ft_count_strs((char *)s, c);
	// printf("n_strs: %lu\n", n_strs);
	while (s[i])
	{
		if (s[i] != c)
		{
			s_len = ft_str_len((char *)s + i, c);
			arr = ft_arr_alloc(arr, n_strs);
			arr[i] = ft_str_alloc(arr, n_strs, s_len);
			ft_strlcpy(arr[i], s, s_len + 1);
		}
		i++;
	}
	return (arr);
}
