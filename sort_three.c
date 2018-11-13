/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 22:02:28 by jadawson          #+#    #+#             */
/*   Updated: 2018/10/30 11:43:31 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

int		sort_three(t_nums **a)
{
	int t;
	int m;
	int b;
	int i;

	t = (*a)->num;
	m = (*a)->next->num;
	b = (*a)->next->next->num;
	i = 0;
	if (t > m && m < b && b > t)
		i += sort_three_sa_and_write(a);
	if (t > m && m > b && b < t)
		i += sort_three_sa_and_rra(a);
	if (t > m && m < b && b < t)
		i += sort_three_ra_and_write(a);
	if (t < m && m > b && b > t)
		i += sort_three_sa_and_ra(a);
	if (t < m && m > b && b < t)
		i += sort_three_rra_and_write(a);
	if (first_confirmed_ordered(*a) == 0)
		return (i);
	return (0);
}
