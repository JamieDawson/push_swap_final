/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   confirming_digits.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 20:54:25 by jadawson          #+#    #+#             */
/*   Updated: 2018/11/13 16:53:52 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

void			exit_not_a_num(t_nums **a)
{
	ft_putstr("\033[31mError\033[0m\n");
	free_here(a);
	exit(1);
}

void			above_int_max_c(long long nbr, t_nums **a)
{
	long long int i;
	long long int small;

	i = 1;
	small = -2147483648;
	if (nbr > 2147483647)
	{
		ft_putstr("\33[31mError\033[0m\n");
		free_here(a);
		exit(1);
	}
	if (nbr < small)
	{
		ft_putstr("\33[31mError\033[0m\n");
		free_here(a);
		exit(1);
	}
}

long long		ft_atoi_digit_confirm_c(const char *str, t_nums **a)
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
		exit_not_a_num(a);
	above_int_max_c(nbr * negative, a);
	return (nbr * negative);
}

void			above_int_max(long long nbr, t_nums **a)
{
	long long int i;
	long long int small;

	i = 1;
	small = -2147483648;
	if (nbr > 2147483647)
	{
		ft_putstr("\33[31mError\033[0m\n");
		free_here(a);
		exit(1);
	}
	if (nbr < small)
	{
		ft_putstr("\33[31mError\033[0m\n");
		free_here(a);
		exit(1);
	}
}

long long		ft_atoi_digit_confirm(const char *str, t_nums **a)
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
		exit_not_a_num(a);
	above_int_max(nbr * negative, a);
	return (nbr * negative);
}
