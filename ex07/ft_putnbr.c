/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 14:16:14 by anachid           #+#    #+#             */
/*   Updated: 2020/08/07 15:34:27 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int a;
	int b;
	int tab;
	a = nb / 10;
	b = nb % 10;
	ft_putchar(b + '0');
	if (a > 10)
		ft_putnbr(a);
	else 
		ft_putchar(a + '0');
}
