/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:44:55 by abarot            #+#    #+#             */
/*   Updated: 2019/10/10 16:43:41 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
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
		if (q[i] == c)
			return (dest + i + 1);
		i++;
	}
	return (0);
}
