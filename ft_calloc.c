/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:22:59 by abarot            #+#    #+#             */
/*   Updated: 2019/10/16 10:37:25 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void *dest;

	dest = (void *)malloc(num * size);
	if (dest == 0)
		return (0);
	ft_bzero(dest, (size * num));
	return (dest);
}
