/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 14:37:09 by anachid           #+#    #+#             */
/*   Updated: 2020/08/12 16:15:01 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hexa_decimale(unsigned char a)
{
	char	*b;

	b = "0123456789abcdef";
	ft_putchar(b[a / 16]);
	ft_putchar(b[a % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		if (str[i] >= 32 && str[i] <= 126)
		{
			ft_putchar(str[i]);
			i++;
		}
		else
		{
			write(1, "\\", 1);
			ft_hexa_decimale(str[i]);
			i++;
		}
}
