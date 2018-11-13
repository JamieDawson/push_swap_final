/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 18:59:21 by jadawson          #+#    #+#             */
/*   Updated: 2018/03/07 19:31:02 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *find;

	find = (unsigned char*)s;
	while (n > 0)
	{
		if (*find == (unsigned char)c)
			return (find);
		find++;
		n--;
	}
	return (NULL);
}
