/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 18:29:09 by jadawson          #+#    #+#             */
/*   Updated: 2018/02/20 15:53:09 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*let;

	if (num == 0)
		return (ptr);
	let = (unsigned char *)ptr;
	while (num--)
	{
		*let = (unsigned char)value;
		if (num)
			let++;
	}
	return (ptr);
}
