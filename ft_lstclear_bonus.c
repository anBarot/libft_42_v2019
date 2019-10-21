/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 13:22:41 by abarot            #+#    #+#             */
/*   Updated: 2019/10/18 15:02:42 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*n_lst;
	t_list	*tmp;

	n_lst = *lst;
	tmp = n_lst;
	if (lst == 0)
		return ;
	while (n_lst)
	{
		tmp = n_lst;
		n_lst = n_lst->next;
		ft_lstdelone(tmp, del);
	}
	lst = 0;
}
