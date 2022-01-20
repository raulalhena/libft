/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-m <rlopez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:33:23 by rlopez-m          #+#    #+#             */
/*   Updated: 2022/01/20 20:14:20 by rlopez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*lst_tmp;
	size_t	c;

	c = 0;
	lst_tmp = lst;
	while (lst_tmp != NULL)
	{
		lst_tmp = lst_tmp->next;
		c++;
	}
	return (c);
}
