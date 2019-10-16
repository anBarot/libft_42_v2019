/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 13:00:26 by abarot            #+#    #+#             */
/*   Updated: 2019/10/15 14:04:32 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *new_lst;

	if (!(new_lst = malloc(sizeof(t_list))))
		return (0);
	new_lst -> content = content;
	new_lst -> next = 0;
	return (new_lst);
}