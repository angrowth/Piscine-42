/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 19:00:51 by anachid           #+#    #+#             */
/*   Updated: 2020/08/18 18:01:29 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int size;
	int i;

	i = 0;
	size = max - min;
	if (min >= max)
		return (0);
	if (!(tab = (int *)malloc(size * sizeof(int))))
		return (0);
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
