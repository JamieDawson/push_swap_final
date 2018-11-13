/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallest_finder.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 21:46:24 by jadawson          #+#    #+#             */
/*   Updated: 2018/10/16 16:07:33 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

long	smallest_finder(t_nums *b)
{
	int smallest;

	smallest = b->num;
	while (b != NULL)
	{
		if (smallest >= b->num)
			smallest = b->num;
		b = b->next;
	}
	return (smallest);
}
