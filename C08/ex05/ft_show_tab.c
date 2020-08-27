/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 10:22:21 by anachid           #+#    #+#             */
/*   Updated: 2020/08/23 15:47:02 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void				ft_putchar(char c)
{
	write(1, &c, 1);
}

void				ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void				ft_putnbr(int nb)
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

void				ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
