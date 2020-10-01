/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 10:54:55 by adelille          #+#    #+#             */
/*   Updated: 2020/09/27 22:16:49 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_put_error(int i)
{
	if (i == 1)
		write(1, "Error\n", 6);
	else if (i == 0)
		write(1, "Dict Error\n", 11);
	return (0);
}

void	putstrm(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] == ' ')
		i++;
	if (!str[0])
	{
		i = ft_put_error(0);
		return ;
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
