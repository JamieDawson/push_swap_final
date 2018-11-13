/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 18:56:55 by jadawson          #+#    #+#             */
/*   Updated: 2018/03/10 17:48:17 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*collect;
	unsigned char	*final;
	size_t			i;

	i = 0;
	final = (unsigned char *)dst;
	collect = (unsigned char *)src;
	while (i++ < n)
	{
		if (*collect == (unsigned char)c)
		{
			*final++ = *collect++;
			return (final);
		}
		*final++ = *collect++;
	}
	return (NULL);
}
