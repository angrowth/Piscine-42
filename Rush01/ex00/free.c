/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atruphem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 10:45:08 by atruphem          #+#    #+#             */
/*   Updated: 2020/08/16 11:46:34 by atruphem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_free(char **tab, int ***rules)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		free(tab[i]);
		i++;
	}
	i = 0;
	while (i < 2)
	{
		free(rules[0][i]);
		free(rules[1][i]);
		i++;
	}
	i = 0;
	while (i < 2)
	{
		free(rules[i]);
		i++;
	}
	free(tab);
	free(rules);
}
