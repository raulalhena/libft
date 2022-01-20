/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-m <rlopez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 20:14:46 by rlopez-m          #+#    #+#             */
/*   Updated: 2022/01/20 21:11:32 by rlopez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lst_tmp;

	lst_tmp = lst;
	while (lst_tmp != NULL)
	{
		if (lst_tmp->next == NULL)
			break ;
		lst_tmp = lst_tmp->next;
	}
	return (lst_tmp);
}
