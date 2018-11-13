/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest_finder.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 22:08:07 by jadawson          #+#    #+#             */
/*   Updated: 2018/10/30 11:04:46 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

long	biggest_finder(t_nums *a)
{
	int biggest;

	biggest = a->num;
	while (a != NULL)
	{
		if (biggest <= a->num)
			biggest = a->num;
		a = a->next;
	}
	return (biggest);
}
