/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 19:40:04 by anachid           #+#    #+#             */
/*   Updated: 2020/08/26 13:40:56 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*c;

	i = 1;
	j = 0;
	while (tab[j])
	{
		while (tab[i])
		{
			if (cmp(tab[i - 1], tab[i]) > 0)
			{
				c = tab[i - 1];
				tab[i - 1] = tab[i];
				tab[i] = c;
			}
			i++;
		}
		j++;
		i = 1;
	}
}
