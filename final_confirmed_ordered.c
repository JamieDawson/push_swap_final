/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_confirmed_ordered.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 17:55:20 by jadawson          #+#    #+#             */
/*   Updated: 2018/10/30 11:21:44 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

int		final_confirmed_ordered(t_nums *nums, t_nums *b)
{
	if (b)
		return (1);
	if (!nums)
		return (1);
	while (nums)
	{
		if (nums->next)
		{
			if (nums->num > nums->next->num)
				return (1);
		}
		nums = nums->next;
	}
	return (0);
}
