/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 12:55:57 by anachid           #+#    #+#             */
/*   Updated: 2020/08/26 19:53:31 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_atoi.h"
#include "op.h"
#include "ft_putnbr.h"

int		check(char c)
{
	int i;

	i = 0;
	while (i < 5)
	{
		if (c == '+' || c == '-' || c == '*' ||
			c == '/' || c == '%')
			return (1);
		i++;
	}
	return (0);
}

int		pos(char c)
{
	if (c == '+')
		return (0);
	else if (c == '-')
		return (1);
	else if (c == '*')
		return (2);
	else if (c == '/')
		return (3);
	else
		return (4);
}

void	cal(int x, int y, int i)
{
	void	(*calculate[5])(int, int);

	calculate[0] = &ft_addition;
	calculate[1] = &ft_soustraction;
	calculate[2] = &ft_multiplication;
	calculate[3] = &ft_division;
	calculate[4] = &ft_modulo;
	(*calculate[i])(x, y);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	if (argc == 4)
	{
		if (!check(argv[2][0]))
		{
			write(1, "0\n", 2);
			return (0);
		}
		j = pos(argv[2][0]);
		cal(ft_atoi(argv[1]), ft_atoi(argv[3]), j);
	}
	return (0);
}
