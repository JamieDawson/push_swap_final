/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_ra_rra.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 16:25:28 by jadawson          #+#    #+#             */
/*   Updated: 2018/10/30 14:52:55 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

int		ra_x_amount(t_nums **a, int pos)
{
	int i;
	int tot;

	i = pos;
	tot = tot_b(*a);
	while (pos != 0)
	{
		rotate_a(a);
		write(1, "ra\n", 3);
		pos--;
	}
	return (i);
}

int		rra_x_amount(t_nums **a, int pos)
{
	int i;
	int tot;

	tot = tot_b(*a);
	pos = tot - pos;
	i = pos;
	while (pos != 0)
	{
		reverse_rotate_a(a);
		write(1, "rra\n", 4);
		pos--;
	}
	return (i);
}

int		a_which_x_amount(t_nums **a, int range_pos)
{
	int tot;
	int i;

	tot = 0;
	tot = tot_value(*a);
	i = 0;
	if (range_pos < tot / 2)
		i += ra_x_amount(a, range_pos);
	if (range_pos >= tot / 2)
		i += rra_x_amount(a, range_pos);
	return (i);
}
