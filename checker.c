/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 20:11:23 by jadawson          #+#    #+#             */
/*   Updated: 2018/11/01 20:16:16 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

long long		ft_atoi_digit_confirm(const char *str)
{
	long long	i;
	long long	nbr;
	int			negative;

	nbr = 0;
	negative = 1;
	i = 0;
	while (is_space(str[i]))
		i++;
	if (str[i] == '-')
		negative = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
	}
	if (str[i] != '\0' && !(str[i] >= '0' && str[i] <= '9'))
	{
		ft_putstr("\033[31mError\033[0m\n");
		exit(1);
	}
	above_int_max(nbr * negative);
	return (nbr * negative);
}

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
		ft_putstr("\033[31mError\033[0m\n");
		exit(1);
	}
}

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

void			print_ok_if_ordered(void)
{
	ft_putstr("\033[32mOK\033[0m\n");
	exit(1);
}

int				main(int argc, char **argv)
{
	t_nums	*a;
	t_nums	*b;

	setbuf(stdout, NULL);
	if (argc < 2)
		return (0);
	a = create_a_list(argc, argv);
	b = NULL;
	if (a == NULL)
		return (0);
	grab_command(&a, &b);
	return (0);
}
