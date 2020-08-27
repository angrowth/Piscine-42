/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 07:58:03 by anachid           #+#    #+#             */
/*   Updated: 2020/08/18 10:09:42 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_putstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
}

void	tri_bulles(char **tab, int size)
{
	int		i;
	int		j;
	char	*c;

	i = 0;
	j = 2;
	while (i < size)
	{
		while (j < size)
		{
			if (ft_strcmp(tab[j - 1], tab[j]) > 0)
			{
				c = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = c;
			}
			j++;
		}
		i++;
		j = 2;
	}
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc > 1)
	{
		if (argc == 2)
		{
			ft_putstr(argv[i]);
			write(1, "\n", 1);
		}
		else
		{
			tri_bulles(argv, argc);
			while (argv[i])
			{
				ft_putstr(argv[i]);
				write(1, "\n", 1);
				i++;
			}
		}
	}
	else
		return (0);
}
