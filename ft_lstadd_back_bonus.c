/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 14:14:16 by abarot            #+#    #+#             */
/*   Updated: 2019/10/18 14:38:49 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *last_lst;

	if (*alst == NULL)
	{
		*alst = new;
		return ;
	}
	last_lst = *alst;
	ft_lstlast(last_lst);
	last_lst->next = new;
}
