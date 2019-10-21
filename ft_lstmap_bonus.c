/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 13:34:20 by abarot            #+#    #+#             */
/*   Updated: 2019/10/18 15:06:20 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_new;
	t_list	**lst_clear;
	int		size;

	size = 0;
	*lst_clear = lst_new;
	while (lst)
	{
		size = ft_lstsize(lst_new);
		if (!(lst_new->next = ft_lstnew(f(lst->content))))
		{
			while (size-- > 0)
				ft_lstclear(lst_clear, del);
		}
		lst_new = lst_new->next;
		lst = lst->next;
	}
	return (lst_new);
}
