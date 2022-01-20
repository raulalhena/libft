/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-m <rlopez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 21:32:31 by rlopez-m          #+#    #+#             */
/*   Updated: 2022/01/20 21:47:49 by rlopez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*lst_tmp;

	lst_tmp = lst;
	while (lst_tmp->next)
	{
		if (lst_tmp->content == lst->content)
		{
			del(lst->content);
			free(lst->content);
		}
		lst_tmp = lst_tmp->next;
	}
}
