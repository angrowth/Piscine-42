/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 10:04:29 by anachid           #+#    #+#             */
/*   Updated: 2020/08/09 20:42:12 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	tri_bulles(int *tab, int size)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	j = 1;
	while (i < size)
	{
		while (j < size)
		{
			if (tab[j - 1] > tab[j])
			{
				c = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = c;
			}
			j++;
		}
		i++;
		j = 1;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	tri_bulles(tab, size);
}
