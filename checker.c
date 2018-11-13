/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 20:11:23 by jadawson          #+#    #+#             */
/*   Updated: 2018/11/13 14:25:01 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

t_nums			*create_a_list_c(int argc, char **argv, t_nums **a)
{
	t_nums	*hold_head;
	t_nums	*head;
	t_nums	*temp;
	int		i;

	i = 2;
	head = malloc(sizeof(t_nums));
	hold_head = head;
	head->num = ft_atoi_digit_confirm_c(argv[1], a); //PROPERLY FREED!
	head->next = NULL;
	while (i < argc)
	{
		temp = malloc(sizeof(t_nums));
		temp->num = ft_atoi_digit_confirm_c(argv[i], a); //PROPERLY FREED!
		temp->next = NULL;
		hold_head->next = temp;
		hold_head = hold_head->next;
		dup_check_c(head, temp->num, a); //PROPERLY FREED!
		i++;
	}
	return (head);
}

void			print_ok_if_ordered(void)
{
	ft_putstr("\033[32mOK\033[0m\n");
	exit(1);
}

int				main(int argc, char **argv)
{
	t_nums	*a;
	t_nums	*b;

	setbuf(stdout, NULL);//DELETE WHEN DONE
	if (argc < 2)
		return (0);
	a = create_a_list_c(argc, argv, &a); //Passed to a correctly. tested dup
	b = NULL;
	if (a == NULL)
		return (0);
	grab_command(&a, &b);
	free_here(&a);
	free_here(&b);
	return (0);
}
