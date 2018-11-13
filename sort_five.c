/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 14:55:22 by jadawson          #+#    #+#             */
/*   Updated: 2018/11/01 20:17:42 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

int		five_pb_first_nums(t_nums **a, t_nums **b, int i)
{
	i = 2;
	push_b(a, b);
	push_b(a, b);
	write(1, "pb\n", 3);
	write(1, "pb\n", 3);
	return (i);
}

int		sort_a_big_or_small(t_nums **a, t_nums **b)
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
		i += a_which_x_amount(b, b_small_pos);
	return (i);
}

int		pos_for_a(t_nums **a, t_nums **b, int pos)
{
	int		i;
	t_nums	*temp;

	i = 0;
	temp = *a;
	if (*b)
	{
		if ((*b)->num > biggest_finder(*a) || (*b)->num < smallest_finder(*a))
			sort_a_big_or_small(b, a);
		else
		{
			while (temp)
			{
				pos++;
				if (temp->next != NULL)
				{
					if ((*b)->num > temp->num && (*b)->num < temp->next->num)
						return (pos);
				}
				temp = temp->next;
			}
		}
	}
	return (pos);
}

int		pos_finder_test(t_nums *a, int small)
{
	int	i;
	int	pos;

	i = 0;
	pos = 0;
	while (a)
	{
		if (small == a->num)
			pos = i;
		i++;
		a = a->next;
	}
	return (pos);
}

int		sort_five(t_nums **a, t_nums **b, int i)
{
	int	pos;
	int small;

	pos = 0;
	small = 0;
	i += five_pb_first_nums(a, b, i);
	i += sort_three(a);
	while (*b)
	{
		pos = 0;
		pos = pos_for_a(a, b, pos);
		i += a_which_x_amount(a, pos);
		push_a(a, b);
		write(1, "pa\n", 3);
	}
	small = smallest_finder(*a);
	pos = pos_finder_test(*a, small);
	i += a_which_x_amount(a, pos);
	return (i);
}
