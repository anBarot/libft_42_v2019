/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:14:54 by abarot            #+#    #+#             */
/*   Updated: 2019/10/10 16:16:13 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*p;
	char			*q;

	i = 0;
	p = (char *)dest;
	q = (char *)src;
	while (i < n)
	{
		p[i] = q[i];
		i++;
	}
	return (dest);
}
