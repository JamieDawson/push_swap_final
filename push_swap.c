/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 20:11:05 by jadawson          #+#    #+#             */
/*   Updated: 2018/11/12 21:54:08 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

void			above_int_max(long long nbr)
{
	long long int i;
	long long int small;

	i = 1;
	small = -2147483648;
	if (nbr > 2147483647)
	{
		ft_putstr("\33[31mError\033[0m\n");
		exit(1);
	}
	if (nbr < small)
	{
		ft_putstr("\33[31mError\033[0m\n");
		exit(1);
	}
}

int				bulky_list(t_nums **a, t_nums **b, int i, int numbers)
{
	if (numbers <= 200)
	{
		i += bulky_med(a, b, i);
		return (i);
	}
	if (numbers <= 800)
	{
		i += bulky_large(a, b, i);
		return (i);
	}
	return (i);
}

int				three_or_five(t_nums **a, t_nums **b, int flag, int argc)
{
/*	if (fake == 4)
		i += sort_three(a);
	if (fake == 6)
		i += sort_five(a, b, i);
	return (i)
*/		
		
	int i;

	i = 0;
	if (argc == 4 && flag == 0)
		i += sort_three(a);
	if (argc == 6 && flag == 0)
		i += sort_five(a, b, i);
	if (argc == 5 && flag == 1)
		i += sort_three(a);
	if (argc == 7 && flag == 1)
		i += sort_five(a, b, i);
	return (i);
		
}


//handles flag but might fail....
t_nums			*create_a_list(int argc, char **argv)
{
	t_nums	*hold_head;
	t_nums	*head;
	t_nums	*temp;
	int		i;

	i = 2;
	i = (argv[1][0] == '-' && argv[1][1] == 'j') ? 3 : 2;
	head = malloc(sizeof(t_nums));
	hold_head = head;
	if (argv[1][0] == '-' && argv[1][1] == 'j')
		head->num = ft_atoi_digit_confirm(argv[2]);
	else
		head->num = ft_atoi_digit_confirm(argv[1]);
	head->next = NULL;
	while (i < argc)
	{
		temp = malloc(sizeof(t_nums));
		temp->num = ft_atoi_digit_confirm(argv[i]);
		temp->next = NULL;
		hold_head->next = temp;
		hold_head = hold_head->next;
		dup_check(head, temp->num);
		i++;
	}
	return (head);
}



/*
//works but does not handle flags.
t_nums			*create_a_list(int argc, char **argv)
{
	t_nums	*hold_head;
	t_nums	*head;
	t_nums	*temp;
	int		i;

	i = 2;
	head = malloc(sizeof(t_nums));
	hold_head = head;
	head->num = ft_atoi_digit_confirm(argv[1]);
	head->next = NULL;
	while (i < argc)
	{
		temp = malloc(sizeof(t_nums));
		temp->num = ft_atoi_digit_confirm(argv[i]);
		temp->next = NULL;
		hold_head->next = temp;
		hold_head = hold_head->next;
		dup_check(head, temp->num);
		i++;
	}
	return (head);
}
*/

void	print_list(t_nums *nums)
{
	while (nums != NULL)
	{
		printf("%ld\n", nums->num);
		nums = nums->next;
	}
}



//FLAG HANDLING MAIN GOD DAMNIT
int				main(int argc, char **argv)
{
	t_nums	*a;
	t_nums	*b;
	int		i;
	int		flag;

	i = 0;
	flag = 0;
	a = NULL;
	flag = (argv[1][0] == '-' && argv[1][1] == 'j') ? 1 : 0;
	a = create_a_list(argc, argv);
	b = NULL;
	if (a == NULL || first_confirmed_ordered(a) == 0)
		return (0);
	if (argc >= 4 && argc <= 7)
	{
		i += three_or_five(&a, &b, flag, argc);
	//	return (0);
	}
	if (argc >= 8 && argc <= 800)
		i += bulky_list(&a, &b, i, argc);
	if (argc >= 801)
		jumbo(&a, &b, i);
	if (final_confirmed_ordered(a, b) == 1)
		i = my_insert_sort(&a, &b, i);
	if (flag == 1)
		print_list(a);
	return (0);
}
