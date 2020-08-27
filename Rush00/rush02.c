/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 14:54:10 by anachid           #+#    #+#             */
/*   Updated: 2020/08/08 16:03:44 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	line(int x, char df, char m)
{
	int i;

	i = 0;
	ft_putchar(df);
	while (i < x - 2)
	{
		ft_putchar(m);
		i++;
	}
	if (x > 1)
		ft_putchar(df);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	i = 0;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	line(x, 'A', 'B');
	while (i < y - 2)
	{
		line(x, 'B', ' ');
		i++;
	}
	if (y > 1)
		line(x, 'C', 'B');
}
