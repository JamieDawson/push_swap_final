/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 14:53:26 by jadawson          #+#    #+#             */
/*   Updated: 2018/03/10 17:50:47 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		tot;
	char	*tmp;

	if (!s1 || !s2)
		return (NULL);
	tot = (ft_strlen((char *)s1) + ft_strlen((char *)s2));
	tmp = (char *)malloc(sizeof(*tmp) * (tot) + 1);
	i = 0;
	if (tmp)
	{
		while (*s1)
		{
			tmp[i] = *s1++;
			i++;
		}
		while (*s2)
		{
			tmp[i] = *s2++;
			i++;
		}
		tmp[i] = '\0';
		return (tmp);
	}
	return (NULL);
}
