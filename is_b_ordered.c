/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_b_ordered.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 21:18:54 by jadawson          #+#    #+#             */
/*   Updated: 2018/10/30 14:53:27 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

int			sort_b_big_or_small(t_nums **a, t_nums **b)
{
	long	b_largest;
	long	b_smallest;
	int		b_small_pos;
	int		i;

	i = 0;
	b_largest = biggest_finder(*b);
	b_smallest = smallest_finder(*b);
	b_small_pos = b_small_pos_funct(*b, b_smallest);
	if ((*a)->num < b_smallest || (*a)->num > b_largest)
	{
		i += which_x_amount(b, b_small_pos);
		i += push_b_and_write(a, b);
	}
	return (i);
}

int			pos_for_b(t_nums **a, t_nums **b)
{
	int		i;
	t_nums	*temp;
	int		pos;

	i = 0;
	pos = 0;
	temp = *b;
	if (a)
	{
		while (temp)
		{
			pos++;
			if (temp->next != NULL)
			{
				if ((*a)->num > temp->num && (*a)->num < temp->next->num)
					return (pos);
			}
			temp = temp->next;
		}
	}
	return (pos);
}

int			rb_x_amount(t_nums **b, int pos)
{
	int i;
	int tot;

	i = pos;
	tot = tot_b(*b);
	while (pos != 0)
	{
		rotate_b(b);
		write(1, "rb\n", 3);
		pos--;
	}
	return (i);
}

int			rrb_x_amount(t_nums **b, int pos)
{
	int i;
	int tot;

	tot = tot_b(*b);
	pos = tot - pos;
	i = pos;
	if (pos > 0)
	{
		while (pos != 0)
		{
			reverse_rotate_b(b);
			write(1, "rrb\n", 4);
			pos--;
		}
	}
	return (i);
}

int			which_x_amount(t_nums **b, int pos)
{
	int tot;
	int i;

	tot = 0;
	tot = tot_value(*b);
	i = 0;
	if (pos < tot / 2)
		i += rb_x_amount(b, pos);
	if (pos >= tot / 2)
		i += rrb_x_amount(b, pos);
	return (i);
}
