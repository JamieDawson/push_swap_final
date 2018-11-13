/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/04 20:48:11 by jadawson          #+#    #+#             */
/*   Updated: 2018/03/10 18:15:27 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *listnew;

	if (!(listnew = ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (content == 0 || content_size == 0)
		;
	else if ((listnew->content = ft_memalloc(content_size)))
	{
		listnew->content_size = content_size;
		ft_memcpy(listnew->content, content, content_size);
	}
	else
		ft_memdel((void**)&listnew);
	return (listnew);
}
