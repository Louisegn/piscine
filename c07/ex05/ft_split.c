/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrillon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 17:04:54 by lgrillon          #+#    #+#             */
/*   Updated: 2020/10/01 18:20:40 by lgrillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_set(char c, char *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strdup(char *src, int size)
{
	char	*tab;
	int		i;

	i = 0;
	while (src[i] && i < size)
		i++;
	if (!(tab = (char *)malloc(sizeof(char) * (size))))
		return (NULL);
	i = 0;
	while (src[i] && i < size)
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

int		ft_nbw(char *str, char *set)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if ((ft_is_set(str[i], set) && !ft_is_set(str[i + 1], set))
			|| (!ft_is_set(str[i], set) && !str[i + 1]) || !str[i + 1])
		{
			n++;
		}
		i++;
	}
	if (n == 0)
		return (1);
	return (n);
}

int		ft_nbl(char *str, char *set)
{
	int j;

	j = 0;
	while (!(ft_is_set(str[j], set)) && str[j])
		j++;
	return (j);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		x;
	int		i;

	x = 0;
	i = 0;
	if (!(tab = (char **)malloc(sizeof(char*) * (ft_nbw(str, charset) + 1))))
		return (NULL);
	while (x < ft_nbw(str, charset) && str[i])
	{
		while (ft_is_set(str[i], charset) && str[i])
			i++;
		if (!str[i])
			break ;
		tab[x] = ft_strdup(&str[i], ft_nbl(&str[i], charset));
		x++;
		i += ft_nbl(&str[i], charset);
	}
	tab[x] = 0;
	return (tab);
}
