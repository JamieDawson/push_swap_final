/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 19:13:31 by jadawson          #+#    #+#             */
/*   Updated: 2018/03/05 22:24:17 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*result;
	int		i;

	i = 0;
	while (src[i])
		i++;
	if ((result = malloc(i + 1)))
	{
		i = 0;
		while (src[i] != '\0')
		{
			result[i] = src[i];
			i++;
		}
		result[i] = '\0';
	}
	return (result);
}
