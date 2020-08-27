/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 07:27:45 by anachid           #+#    #+#             */
/*   Updated: 2020/08/17 16:00:17 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int size;

	size = 0;
	i = 0;
	if (argc > 1)
	{
		while (argv[size])
			size++;
		while (i < size - 1)
		{
			ft_putstr(argv[size - i - 1]);
			ft_putchar('\n');
			i++;
		}
	}
}
