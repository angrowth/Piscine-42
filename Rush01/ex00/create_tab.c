/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueguin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 11:04:53 by mqueguin          #+#    #+#             */
/*   Updated: 2020/08/15 16:26:57 by atruphem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**create_tab(void)
{
	char	**tab;
	int		i;
	int		j;

	if (!(tab = (char**)malloc(sizeof(char*) * 4)))
		return (0);
	if (!(tab[0] = (char*)malloc(sizeof(char) * 4)))
		return (0);
	if (!(tab[1] = (char*)malloc(sizeof(char) * 4)))
		return (0);
	if (!(tab[2] = (char*)malloc(sizeof(char) * 4)))
		return (0);
	if (!(tab[3] = (char*)malloc(sizeof(char) * 4)))
		return (0);
	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			tab[i][j] = 0;
	}
	return (tab);
}
