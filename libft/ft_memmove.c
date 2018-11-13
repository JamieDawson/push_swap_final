/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 19:02:55 by jadawson          #+#    #+#             */
/*   Updated: 2018/03/07 20:44:43 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*temp;
	unsigned char	*new;

	i = 0;
	temp = (unsigned char*)src;
	new = dest;
	if (temp < new)
		while (n--)
			new[n] = temp[n];
	else
		ft_memcpy(new, temp, n);
	return (dest);
}
