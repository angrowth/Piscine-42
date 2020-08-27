/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 12:05:49 by anachid           #+#    #+#             */
/*   Updated: 2020/08/26 18:09:18 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	if (length <= 1)
		return (1);
	while (i < (length - 1) && f(tab[i], tab[i + 1]) >= 0)
		i++;
	if (i == (length - 1))
		return (1);
	i = 0;
	while (i < (length - 1) && f(tab[i], tab[i + 1]) <= 0)
		i++;
	if (i == (length - 1))
		return (1);
	return (0);
}
