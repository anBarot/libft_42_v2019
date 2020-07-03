/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:39:15 by abarot            #+#    #+#             */
/*   Updated: 2020/04/21 16:58:48 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;

	if (!s ||
		!(dest = (char *)ft_calloc((ft_strlen((char *)s) + 1), sizeof(char))))
		return (0);
	while (*s)
	{
		*dest = *s;
		s++;
	}
	return (dest);
}
