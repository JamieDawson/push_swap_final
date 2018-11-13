/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 21:41:31 by jadawson          #+#    #+#             */
/*   Updated: 2018/03/09 13:54:10 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int i)
{
	char	*ptr;
	int		len;
	long	change;

	change = (long)i;
	len = ft_numlen(change);
	if ((ptr = ft_strnew(len)) == NULL)
		return (NULL);
	ptr[len--] = '\0';
	if (change < 0)
	{
		ptr[0] = '-';
		change = -change;
	}
	ptr[len--] = (change % 10) + '0';
	while (change >= 10)
	{
		change /= 10;
		ptr[len--] = (change % 10) + '0';
	}
	return (ptr);
}
