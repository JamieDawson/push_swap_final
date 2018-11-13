/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 20:33:24 by jadawson          #+#    #+#             */
/*   Updated: 2018/10/16 16:07:27 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

void	swap_b(t_nums **nums)
{
	t_nums *temp;

	if (*nums == NULL)
		return ;
	temp = *nums;
	*nums = (*nums)->next;
	temp->next = (*nums)->next;
	(*nums)->next = temp;
}
