/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_manager.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeyron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 11:16:42 by jpeyron           #+#    #+#             */
/*   Updated: 2020/09/27 22:36:00 by jpeyron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "struct_manager.h"
#include "utils.h"

int			skip_chars(char *str, int i)
{
	while (str[i] == ' ')
		i++;
	if (str[i] != ':')
	{
		ft_put_error(0);
		return (-1);
	}
	i++;
	while (str[i] == ' ')
		i++;
	return (i);
}

int			parse_str(char *str, t_number *elem, int i, int j)
{
	int	k;

	while (str[i] && str[i] >= '0' && str[i] <= '9')
		i++;
	if (i > 0)
		k = i;
	while (str[i] == ' ')
		i++;
	if (str[i] != ':')
	{
		free(str);
		return (0);
	}
	j = ++i;
	while (str[i] >= 32 && str[i] <= 126)
		i++;
	if (str[i] || i <= 3)
	{
		free(str);
		return (ft_put_error(0));
	}
	str[k] = 0;
	elem->digits = str;
	elem->letter_num = &str[j];
	return (1);
}

t_number	*create_struct(char **lines)
{
	int			i;
	t_number	*tab;

	i = 0;
	while (lines[i])
		i++;
	if (!(tab = malloc((i + 1) * sizeof(t_number))))
	{
		i = -1;
		while (lines[++i])
			free(lines[i]);
		free(lines);
		return (NULL);
	}
	i = -1;
	while (lines[++i])
	{
		if (!parse_str(lines[i], &tab[i], 0, 0))
			return (NULL);
	}
	tab[i].digits = 0;
	return (tab);
}

char		*find_in_struct(char fn, char sn, int len, t_number *tab)
{
	int	i;

	i = 0;
	if (sn >= '0' && sn <= '9')
	{
		while (tab[i].digits)
		{
			if (tab[i].digits[0] == '1' && tab[i].digits[1] == sn
					&& ft_strlen(tab[i].digits) == len)
				return (tab[i].letter_num);
			i++;
		}
	}
	else
	{
		while (tab[i].digits)
		{
			if (tab[i].digits[0] == fn &&
					ft_strlen(tab[i].digits) == len)
				return (tab[i].letter_num);
			i++;
		}
	}
	return ("\0");
}
