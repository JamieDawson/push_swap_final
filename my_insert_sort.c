/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_insert_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 20:34:39 by jadawson          #+#    #+#             */
/*   Updated: 2018/10/30 11:36:48 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

int		tot_value(t_nums *a)
{
	int i;

	i = 0;
	while (a)
	{
		if (a)
			i++;
		a = a->next;
	}
	return (i);
}

int		push_b_and_write(t_nums **a, t_nums **b)
{
	int i;

	i = 0;
	push_b(a, b);
	write(1, "pb\n", 3);
	i++;
	return (i);
}

int		my_insert_sort(t_nums **a, t_nums **b, int i)
{
	int	small;
	int tot;
	int	pos;

	while (*a)
	{
		small = min_finder(*a, small);
		tot = tot_value(*a);
		pos = pos_finder(*a, pos, small);
		if (small == (*a)->num)
		{
			small = push_and_find(a, b, small);
			tot = tot_value(*a);
			pos = pos_finder(*a, pos, small);
			i++;
		}
		if (*a)
			i += ra_or_rra(a, tot, pos);
		if (final_confirmed_ordered(*a, *b) == 0)
			return (i);
		if (*a)
			i += push_b_and_write(a, b);
	}
	return (i);
}
