/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 14:02:12 by abarot            #+#    #+#             */
/*   Updated: 2019/10/18 15:07:47 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*lst_count;

	lst_count = lst;
	i = 0;
	while (lst_count)
	{
		i++;
		lst = lst_count->next;
	}
	return (i);
}
