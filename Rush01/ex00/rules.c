/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 12:36:35 by anachid           #+#    #+#             */
/*   Updated: 2020/08/15 20:45:40 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	**rules_line(char *params)
{
	int **rules_line;
	int i;
	int j;
	int k;

	i = 0;
	if (!(rules_line = (int **)malloc(sizeof(int*) * 2)))
		return (0);
	while (i < 4)
		if (!(rules_line[i++] = (int *)malloc(sizeof(int) * 4)))
			return (0);
	i = 15;
	k = -1;
	while (++k <= 1)
	{
		j = 0;
		while (j < 4)
		{
			if (++i % 2 == 0)
				rules_line[k][j++] = params[i] - 48;
		}
	}
	return (rules_line);
}

int	**rules_col(char *params)
{
	int **rules_col;
	int i;
	int j;
	int	k;

	i = 0;
	if (!(rules_col = (int **)malloc(sizeof(int*) * 2)))
		return (0);
	while (i < 4)
	{
		if (!(rules_col[i++] = (int *)malloc(sizeof(int) * 4)))
			return (0);
	}
	i = -1;
	k = -1;
	while (++k <= 1)
	{
		j = 0;
		while (j < 4)
		{
			if (++i % 2 == 0)
				rules_col[k][j++] = params[i] - 48;
		}
	}
	return (rules_col);
}
