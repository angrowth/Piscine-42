/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 21:24:24 by anachid           #+#    #+#             */
/*   Updated: 2020/08/19 20:08:25 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

long int	ft_strlen(char *str)
{
	long int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int			ft_check(char *base)
{
	int i;
	int j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void		ft_putnbr_base(int nbr, char *base)
{
	long int	i;
	long int	j;

	j = ft_strlen(base);
	i = nbr;
	if (ft_check(base))
	{
		if (i < 0)
		{
			i *= -1;
			ft_putchar('-');
		}
		if (i > (j - 1))
		{
			ft_putnbr_base((i / j), base);
			ft_putnbr_base((i % j), base);
		}
		else
			ft_putchar(base[i]);
	}
}
