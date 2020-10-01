/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrillon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 12:29:42 by lgrillon          #+#    #+#             */
/*   Updated: 2020/10/01 18:17:46 by lgrillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int				*tab;
	unsigned int	i;
	unsigned int	size;

	size = max - min;
	i = 0;
	if (min >= max)
		return (0);
	if (!(tab = (int *)malloc(sizeof(int) * (size))))
		return (0);
	while (i < size)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!(*range = ft_range(min, max)))
		return (-1);
	return (max - min);
}
