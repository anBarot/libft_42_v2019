/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:53:03 by abarot            #+#    #+#             */
/*   Updated: 2019/10/10 16:58:42 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*p;
	char			*q;
	char			tmp[n];

	i = 0;
	p = (char *)dest;
	q = (char *)src;
	while (i < n)
	{
		tmp[i] = q[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		p[i] = tmp[i];
		i++;
	}
	return (dest);
}
