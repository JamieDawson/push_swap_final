/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 18:59:52 by jadawson          #+#    #+#             */
/*   Updated: 2018/10/30 14:20:42 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

void	rotate_b(t_nums **nums)
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
