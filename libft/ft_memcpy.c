/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 18:32:23 by jadawson          #+#    #+#             */
/*   Updated: 2018/03/07 20:43:59 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*collect;
	unsigned char	*final;

	i = 0;
	collect = (unsigned char*)src;
	final = (unsigned char*)dst;
	while (i < n)
	{
		*final = *collect;
		i++;
		final++;
		collect++;
	}
	return (dst);
}
