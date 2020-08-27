/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 05:06:06 by anachid           #+#    #+#             */
/*   Updated: 2020/08/19 20:05:47 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (base[i] < 32 || base[i] > 126 || base[i] == ' ' || base[i] == '\t'
			|| base[i] == '\n' || base[i] == '\v' || base[i] == '\f'
			|| base[i] == '\r' || base[i] == '-' || base[i] == '+')
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

int			in_base(char c, char *base)
{
	int i;

	i = 0;
	while (i < ft_strlen(base))
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int			pos(char c, char *base)
{
	int i;

	i = 0;
	while (c != base[i])
		i++;
	return (i);
}

int			ft_atoi_base(char *str, char *base)
{
	int	long	i;
	int long	res;
	int			sign;

	i = 0;
	res = 0;
	sign = 1;
	if (ft_check(base))
	{
		while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
			i++;
		while (str[i] && (str[i] == '-' || str[i] == '+'))
		{
			if (str[i] == '-')
				sign *= -1;
			i++;
		}
		while (str[i] && in_base(str[i], base))
			res = res * ft_strlen(base) + pos(str[i++], base);
		return (sign * res);
	}
	return (0);
}
