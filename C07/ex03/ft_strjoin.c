/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 21:21:14 by anachid           #+#    #+#             */
/*   Updated: 2020/08/24 17:55:03 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int		taille(int size, char **strs, char *sep)
{
	int res;
	int i;
	int j;

	res = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			res++;
			j++;
		}
		i++;
		if (i < size)
			res += ft_strlen(sep);
	}
	res++;
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*res;

	i = 0;
	if (size <= 0)
	{
		res = (char *)malloc(sizeof(char));
		res[0] = '\0';
		return (res);
	}
	if (!(res = (char *)malloc((taille(size, strs, sep) * sizeof(char)))))
		return (0);
	res[0] = '\0';
	while (i < size)
	{
		if (strs[i])
			res = ft_strcat(res, strs[i]);
		i++;
		if (i != size)
		{
			res = ft_strcat(res, sep);
		}
	}
	return (res);
}
