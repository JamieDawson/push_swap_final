/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_confirmed_ordered.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 17:54:48 by jadawson          #+#    #+#             */
/*   Updated: 2018/10/16 16:04:06 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

int		first_confirmed_ordered(t_nums *nums)
{
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
