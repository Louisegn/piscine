/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrillon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 15:31:32 by lgrillon          #+#    #+#             */
/*   Updated: 2020/09/27 23:36:16 by jpeyron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "struct_manager.h"
#include "read_dict.h"
#include "utils.h"

int		check_str(char **av, int index)
{
	int i;
	int	j;

	i = 0;
	j = av[index][i] == '0';
	while (av[index][i])
	{
		if (av[index][i] < '0' || av[index][i] > '9')
			return (0);
		if (j && av[index][i + 1] && av[index][i] == '0')
			av[index] = &av[index][i + 1];
		else
			i++;
	}
	return (1);
}

int		is_too_big(char *number, t_number *tab)
{
	int	i;
	int	n_len;
	int greater_n;

	n_len = ft_strlen(number);
	greater_n = ft_strlen(tab[0].digits);
	i = 0;
	while (tab[++i].digits)
	{
		if (ft_strlen(tab[i].digits) > greater_n)
			greater_n = ft_strlen(tab[i].digits);
	}
	if (n_len > greater_n + 2)
		return (ft_put_error(0));
	return (1);
}

char	*check_arg(int ac, char **av)
{
	char	*dict;

	if (ac > 3 || ac < 2)
		return ("\0");
	if (ac == 2)
	{
		if (check_str(av, 1) == 0)
			return ("\0");
		dict = "./ressources/numbers.dict";
	}
	else if (ac == 3)
	{
		if (check_str(av, 2) == 0)
			return ("\0");
		dict = av[1];
	}
	else
		return ("\0");
	return (dict);
}

int		handle_tab(char *number, char **lines, t_number *tab)
{
	int	i;

	if (!tab)
	{
		free(lines);
		return (ft_put_error(0));
	}
	ask_print(number, tab, -1);
	i = -1;
	while (tab[++i].digits)
		free(tab[i].digits);
	free(lines);
	return (1);
}

int		main(int ac, char **av)
{
	int			i;
	char		*dict;
	char		**lines;
	t_number	*tab;

	dict = check_arg(ac, av);
	if (dict[0] == '\0')
		return (ft_put_error(1));
	lines = parse_dict(dict);
	if (lines)
	{
		tab = create_struct(lines);
		if (!is_too_big(ac == 2 ? av[1] : av[2], tab))
		{
			i = -1;
			while (tab[++i].digits)
				free(tab[i].digits);
			return (0);
		}
		if (!handle_tab(ac == 2 ? av[1] : av[2], lines, tab))
			return (0);
	}
	write(1, "\n", 1);
	return (0);
}
