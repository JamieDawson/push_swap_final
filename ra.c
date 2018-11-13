/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 18:59:25 by jadawson          #+#    #+#             */
/*   Updated: 2018/10/16 16:06:44 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

void	rotate_a(t_nums **nums)
{
	t_nums *head;

	head = *nums;
	if (*nums == NULL)
		return ;
	while ((*nums)->next != NULL)
		*nums = (*nums)->next;
	(*nums)->next = head;
	head = head->next;
	*nums = (*nums)->next;
	(*nums)->next = NULL;
	*nums = head;
}
