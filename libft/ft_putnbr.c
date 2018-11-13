/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 13:42:37 by jadawson          #+#    #+#             */
/*   Updated: 2018/02/20 19:10:13 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	long long nnb;

	nnb = nb;
	if (nnb < 0)
	{
		ft_putchar('-');
		nnb = -nnb;
	}
	if (nnb >= 10)
	{
		ft_putnbr(nnb / 10);
		ft_putnbr(nnb % 10);
	}
	else
		ft_putchar(nnb + '0');
}
