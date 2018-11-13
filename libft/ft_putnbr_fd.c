/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 14:49:18 by jadawson          #+#    #+#             */
/*   Updated: 2018/03/10 18:19:44 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long nnb;

	nnb = n;
	if (nnb < 0)
	{
		ft_putchar_fd('-', fd);
		nnb = -nnb;
	}
	if (nnb >= 10)
	{
		ft_putnbr_fd((nnb) / 10, fd);
		ft_putnbr_fd((nnb) % 10, fd);
	}
	else
		ft_putchar_fd(nnb + '0', fd);
}
