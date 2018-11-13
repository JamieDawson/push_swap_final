/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 20:18:14 by jadawson          #+#    #+#             */
/*   Updated: 2018/03/12 14:59:55 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	temp;
	int		len;
	int		n;

	n = 0;
	len = 0;
	while (str[len])
		len++;
	len--;
	while (n < len)
	{
		temp = str[len];
		str[len--] = str[n];
		str[n++] = temp;
	}
	return (str);
}
