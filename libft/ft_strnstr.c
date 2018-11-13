/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 19:40:57 by jadawson          #+#    #+#             */
/*   Updated: 2018/09/10 00:25:30 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *l, size_t len)
{
	unsigned long	i;
	int				x;

	x = 0;
	i = 0;
	if (!*l)
		return ((char *)big);
	while (big[i])
	{
		x = 0;
		while (big[i] == l[x] && big[i] && i < len)
		{
			i++;
			x++;
		}
		if (!l[x])
			return ((char *)&big[i - x]);
		i = (i - x) + 1;
	}
	return (NULL);
}
