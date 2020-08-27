/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 21:08:35 by anachid           #+#    #+#             */
/*   Updated: 2020/08/24 13:44:36 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		in_str(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		ft_size(char *str, char *charset)
{
	unsigned int	c;

	c = 0;
	while (*str)
	{
		if (in_str(*str, charset))
			str++;
		else
		{
			c++;
			while (*str && !in_str(*str, charset))
				str++;
		}
	}
	return (c);
}

char	*ft_copy(char *str, int i, int c)
{
	char	*res;
	int		k;

	k = 0;
	if (!(res = (char *)malloc((c + 1) * sizeof(char))))
		return (0);
	while (c)
	{
		res[k] = str[i - c];
		k++;
		c--;
	}
	res[k] = '\0';
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		i;
	int		j;
	int		c;

	i = 0;
	j = 0;
	if (!(res = (char **)malloc((ft_size(str, charset) + 1) * sizeof(char *))))
		return (0);
	while (str[i] && j < ft_size(str, charset))
	{
		c = 0;
		while (str[i] && in_str(str[i], charset))
			i++;
		while (str[i] && !in_str(str[i], charset))
		{
			c++;
			i++;
		}
		res[j] = ft_copy(str, i, c);
		j++;
	}
	res[j] = 0;
	return (res);
}
