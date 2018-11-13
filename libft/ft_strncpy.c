/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 19:14:52 by jadawson          #+#    #+#             */
/*   Updated: 2018/03/10 17:40:24 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t		i;
	const char	*gather;
	char		*final;

	i = 0;
	gather = src;
	final = dest;
	ft_bzero(final, n);
	while (*gather && i < n)
	{
		*dest = *gather;
		i++;
		dest++;
		gather++;
	}
	return (final);
}
