/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grab_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 16:27:08 by jadawson          #+#    #+#             */
/*   Updated: 2018/11/13 11:51:09 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

void	dup_check_ps(t_nums *head, int nbr)
{
	int i;

	i = 0;
	while (head)
	{
		if (head->num == nbr)
			i++;
		head = head->next;
	}
	if (i >= 2)
	{
		ft_putstr("\33[31mError\033[0m\n");
		exit(1);
	}
}

/*
//TESTING REMOVE LATER!
void	print_list(t_nums *nums)
{
	while (nums != NULL)
	{
		ft_putnbr(nums->num);
		ft_putstr("\n");
		nums = nums->next;
	}
}
*/

void	dup_check_c(t_nums *head, int nbr, t_nums **a)
{
	int i;

	i = 0;
	while (head)
	{
		if (head->num == nbr)
			i++;
		head = head->next;
	}
	if (i >= 2)
	{
		ft_putstr("\33[31mError\033[0m\n");
		free_here(a);
		exit(1);
	}
}

int		grab_command(t_nums **a, t_nums **b)
{
	char *line;

	while (get_next_line(0, &line) > 0)
	{
		apply_command(line, a, b);
		free(line);
	}
	if (*b != NULL)
	{
		ft_putstr("\33[31mKO\033[0m\n");
		free_here(a);
		free_here(b);
		exit(1);
	}
	if (final_confirmed_ordered(*a, *b) == 0)
		ft_putstr("\033[32mOK\033[0m\n");
	else
		ft_putstr("\033[31mKO\033[0m\n");
	return (0);
}
