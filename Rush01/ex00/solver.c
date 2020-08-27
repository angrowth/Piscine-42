/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 20:46:47 by anachid           #+#    #+#             */
/*   Updated: 2020/08/20 14:04:17 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** cell[0] -> lines
** cell[1] -> columns
** rules[0/lines 1/column][0/left-up 1/right-down][line/col nbr]
** tab[lines][columns]
*/

#include "rush.h"

int		ft_test_n_complete(char **tab, int *cell, int value, int ***rules)
{
	while (value <= 4)
	{
		tab[cell[0]][cell[1]] = value;
		if (ft_test_duplicate(tab, cell)
			&& ft_test_line_left(tab, cell, rules[0][0])
			&& ft_test_line_right(tab, cell, rules[0][1])
			&& ft_test_col_up(tab, cell, rules[1][0])
			&& ft_test_col_down(tab, cell, rules[1][1]))
			return (1);
		value++;
	}
	tab[cell[0]][cell[1]] = 0;
	return (0);
}

int		ft_solver(char **tab, int line, int col, int ***rules)
{
	int		cell[2];

	cell[0] = line;
	cell[1] = col;
	while (tab[cell[0]][cell[1]] != 0)
	{
		if (cell[1] == 3 && cell[0] == 3)
			return (1);
		if (cell[1] < 3)
			cell[1]++;
		else
		{
			cell[0]++;
			cell[1] = 0;
		}
	}
	if (!ft_test_n_complete(tab, cell, 1, rules))
		return (0);
	while (ft_solver(tab, cell[0], cell[1], rules) == 0)
	{
		if (!ft_test_n_complete(tab, cell, tab[cell[0]][cell[1]] + 1, rules))
			return (0);
	}
	return (1);
}
