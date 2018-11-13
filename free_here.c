/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_here.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 22:34:11 by jadawson          #+#    #+#             */
/*   Updated: 2018/11/12 22:34:15 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

void	free_here(t_nums **all)
{
	t_nums *tmp;

	while (*all)
	{
		tmp = *all;
		tmp->num = 0;
		(*all) = (*all)->next;
		free(tmp);
	}
}
