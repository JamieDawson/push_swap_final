/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bulky_large.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:19:09 by jadawson          #+#    #+#             */
/*   Updated: 2018/11/12 18:49:40 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

int		before_push_b_five(t_nums **a, t_nums **b)
{
	int i;
	int pos;

	i = 0;
	pos = pos_for_b(a, b);
	i += which_x_amount(b, pos);
	i += push_b_and_write(a, b);
	return (i);
}

int		bl_handle_while_range(t_nums **a, t_nums **b, int range_p, int chunk)
{
	int tot;
	int local_max;
	int i;
	int pos;

	tot = tot_value(*a);
	local_max = tot / 11;
	i = 0;
	pos = 0;
	while (range(*a, chunk) == 1)
	{
		range_p = range_pos_funct(*a, local_max);
		if ((*a) && !((*a)->num <= chunk))
			i += a_which_x_amount(a, range_p);
		if ((*a) && (*a)->num <= chunk)
		{
			if (tot_b(*b) == 1 || (!*b))
				i += b_empty_or_one(a, b);
		}
		if (tot_b(*b) > 1 && (*a) && (*a)->num <= chunk)
			i += sort_b_big_or_small(a, b);
		if (tot_b(*b) > 1 && (*a) && (*a)->num <= chunk)
			i += before_push_b_five(a, b);
	}
	return (i);
}

int		bulky_large(t_nums **a, t_nums **b, int i)
{
	int local_max;
	int	tot;
	int j;
	int tot_div_chunk;
	int range_pos;

	j = 0;
	tot = tot_value(*a);
	while (*a)
	{
		j++;
		local_max = tot / 11;
		tot_div_chunk = local_max * j;
		range_pos = range_pos_funct(*a, local_max);
		if (range(*a, tot_div_chunk) == 1)
			i += bl_handle_while_range(a, b, range_pos, tot_div_chunk);
	}
	if (!*a)
		i += rb_or_rrb_one_hundered(a, b, tot);
	return (i);
}
