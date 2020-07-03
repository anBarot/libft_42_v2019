/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarot <abarot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 11:28:24 by abarot            #+#    #+#             */
/*   Updated: 2020/07/03 22:43:07 by abarot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_fill_utoa(char *res, unsigned int n)
{
	static int	i = 0;
	char		*hexchar;

	hexchar = "0123456789abcdef";
	if (n >= 10)
		ft_fill_utoa(res, n / 10);
	res[i] = hexchar[(n % 10)];
	i++;
}

char		*ft_utoa(unsigned int n)
{
	char			*res;
	int				i;

	if (!(res = (char*)ft_calloc(sizeof(char), 12)) || !res)
		return (0);
	i = 0;
	if (n == 0)
		res[i++] = 48;
	if (n > 4294967295)
		n = 4294967295;
	ft_fill_utoa(res, n);
	return ((res));
}
