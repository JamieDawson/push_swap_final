/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 19:23:06 by jadawson          #+#    #+#             */
/*   Updated: 2018/03/05 22:55:56 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t num)
{
	size_t	i;
	size_t	j;
	size_t	l;

	i = 0;
	while (i < num && dest[i] != '\0')
		i++;
	l = i;
	if (i == num)
		return (num + ft_strlen(src));
	j = 0;
	while (src[j] != '\0' && i < num - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (l + ft_strlen(src));
}
