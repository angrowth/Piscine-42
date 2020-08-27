/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 22:20:25 by anachid           #+#    #+#             */
/*   Updated: 2020/08/13 18:47:07 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			k = i;
			while (str[k] == to_find[j] && str[k] && to_find[j])
			{
				k++;
				j++;
				if (to_find[j] == '\0')
					return (&str[i]);
			}
			j = 0;
		}
		i++;
	}
	return (0);
}
