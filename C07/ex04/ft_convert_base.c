/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 20:31:17 by anachid           #+#    #+#             */
/*   Updated: 2020/08/24 22:06:29 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

long int	ft_strlen(char *str);
char		*ft_strcat(char *dest, char *src);
int			ft_check(char *base);
int			in_base(char c, char *base);
int			sign(char *str);

int			size(int nbr, char *base)
{
	long int	res;
	long int	i;

	i = 0;
	while (base[i])
		i++;
	res = 0;
	while (nbr >= i)
	{
		res++;
		nbr /= i;
	}
	res++;
	return (res);
}

void		ft_rev_tab(char *tab, int size)
{
	char		t[size];
	long int	i;

	i = 0;
	while (i < size)
	{
		t[i] = tab[size - i - 1];
		i++;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = t[i];
		i++;
	}
}

long int	ft_atoi_base(char *str, char *base)
{
	long int	i;
	long int	res;

	i = 0;
	res = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) ||
			str[i] == ' '))
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && in_base(str[i], base))
		res = res * ft_strlen(base) + in_base(str[i++], base);
	return (res);
}

void		ft_putnbr_base(long int temp, char *str, char *base)
{
	long int	i;
	long int	j;

	j = ft_strlen(base);
	i = temp;
	if (i / j)
	{
		*str = base[i % j];
		str++;
		ft_putnbr_base((i / j), str, base);
	}
	else
	{
		*str = base[i];
		str++;
		*str = '\0';
	}
}

char		*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res1;
	char	*res2;
	int		i;

	i = 0;
	if (!nbr || !ft_check(base_from) || !ft_check(base_to))
		return (NULL);
	if (!(res1 = (char *)malloc(size(ft_atoi_base(nbr, base_from), base_to)
					* sizeof(char))))
		return (0);
	if (!(res2 = (char *)malloc(size(ft_atoi_base(nbr, base_from), base_to)
					* sizeof(char))))
		return (0);
	ft_putnbr_base(ft_atoi_base(nbr, base_from), res1, base_to);
	ft_rev_tab(res1, ft_strlen(res1));
	if (sign(nbr) == -1 && ft_atoi_base(nbr, base_from))
	{
		res2[0] = '-';
		res2 = ft_strcat(res2, res1);
		return (res2);
	}
	return (res1);
}
