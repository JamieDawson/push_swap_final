/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   confirming_digits.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 20:54:25 by jadawson          #+#    #+#             */
/*   Updated: 2018/11/13 11:24:47 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

void			write_ok(void)
{
	ft_putstr("\033[32mOK\033[0m\n");
	exit(1);
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
		ft_putstr("\33[31mError\033[0m\n");
		exit(1);
	}
}

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

/*
void			confirm_digit(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_atoi_digit_confirm(argv[i]);
		i++;
	}
}
*/
