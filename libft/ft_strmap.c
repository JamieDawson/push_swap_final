/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 13:36:47 by jadawson          #+#    #+#             */
/*   Updated: 2018/03/10 18:21:16 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned	i;
	char		*string;
	char		*ptr;

	if (!s)
		return (NULL);
	string = (char*)s;
	i = ft_strlen((char*)s);
	ptr = (char*)malloc(sizeof(char) * (i + 1));
	i = 0;
	if (ptr == NULL)
		return (NULL);
	while (string[i])
	{
		ptr[i] = f(string[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
