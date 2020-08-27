/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 16:48:30 by anachid           #+#    #+#             */
/*   Updated: 2020/08/11 16:49:59 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		div;
	int		mod;
	long	i;

	div = nb / 10;
	mod = nb % 10;
	i = nb;
	if (i < 0)
	{
		i *= -1;
		div *= -1;
		mod *= -1;
		ft_putchar('-');
	}
	if (i > 9)
	{
		ft_putnbr(div);
		ft_putnbr(mod);
	}
	else
		ft_putchar(i + '0');
}
