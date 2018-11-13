/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_finder.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 17:27:33 by jadawson          #+#    #+#             */
/*   Updated: 2018/10/16 16:05:33 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

int		min_finder(t_nums *a, int min)
{
	min = a->num;
	while (a != NULL)
	{
		if (min >= a->num)
			min = a->num;
		a = a->next;
	}
	return (min);
}
