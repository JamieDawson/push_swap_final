/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 22:23:53 by jadawson          #+#    #+#             */
/*   Updated: 2018/03/12 15:08:11 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_find_words(char *str, char c, int *index)
{
	int		i;
	int		start;
	int		end;
	char	*dest;

	start = *index;
	i = start;
	while (!(str[i] == c))
		if (str[i] != '\0')
			i++;
		else
			break ;
	end = i;
	dest = (char*)malloc(end - start + 1);
	while (str[i] == c)
		i++;
	*index = i;
	i = 0;
	while (i < end - start)
	{
		dest[i] = str[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char			**ft_strsplit(char *str, char c)
{
	int		i;
	int		index;
	char	**dest;

	i = 0;
	index = 0;
	if (!str || !c)
		return (NULL);
	dest = (char**)malloc(sizeof(char*) * (ft_count_words(str, c) + 1));
	if (!dest)
		return (NULL);
	while (*str == c)
		str++;
	while (str[i] != '\0')
	{
		dest[index] = ft_find_words(str, c, &i);
		index++;
	}
	dest[index] = 0;
	return (dest);
}
