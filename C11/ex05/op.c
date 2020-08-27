/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 16:44:49 by anachid           #+#    #+#             */
/*   Updated: 2020/08/26 19:34:44 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putnbr.h"

void	ft_addition(int x, int y)
{
	ft_putnbr(x + y);
	write(1, "\n", 1);
}

void	ft_soustraction(int x, int y)
{
	ft_putnbr(x - y);
	write(1, "\n", 1);
}

void	ft_multiplication(int x, int y)
{
	ft_putnbr(x * y);
	write(1, "\n", 1);
}

void	ft_division(int x, int y)
{
	if (y == 0)
		write(1, "Stop : division by zero\n", 24);
	else
	{
		ft_putnbr(x / y);
		write(1, "\n", 1);
	}
}

void	ft_modulo(int x, int y)
{
	if (y == 0)
		write(1, "Stop : modulo by zero\n", 22);
	else
	{
		ft_putnbr(x % y);
		write(1, "\n", 1);
	}
}
