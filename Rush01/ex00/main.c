/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 20:44:59 by anachid           #+#    #+#             */
/*   Updated: 2020/08/16 11:32:52 by atruphem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "rush.h"

int		ft_check_params(char *params)
{
	int		i;

	if (ft_strlen(params) != 31)
		return (0);
	i = 0;
	while (params[i] != '\0')
	{
		if (i % 2 == 0)
			if (params[i] < 49 || params[i] > 52)
				return (0);
		if (i % 2 != 0)
			if (params[i] != 32)
				return (0);
		i++;
	}
	return (1);
}

void	ft_print_result(char **tab)
{
	int		line;
	int		col;

	line = 0;
	while (line <= 3)
	{
		col = 0;
		while (col <= 3)
		{
			tab[line][col] = tab[line][col] + 48;
			write(1, &tab[line][col], 1);
			if (col < 3)
				write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		line++;
	}
}

int		main(int argc, char **argv)
{
	char	**tab;
	int		***rules;

	if (argc != 2 || !ft_check_params(argv[1]))
	{
		ft_putstr("Error\n");
		return (0);
	}
	tab = create_tab();
	rules = malloc(sizeof(int**) * 2);
	rules[0] = rules_line(argv[1]);
	rules[1] = rules_col(argv[1]);
	if (ft_solver(tab, 0, 0, rules) == 0)
		ft_putstr("Error\n");
	else
		ft_print_result(tab);
	ft_free(tab, rules);
	return (0);
}
