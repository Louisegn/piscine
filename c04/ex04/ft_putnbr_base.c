/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrillon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 09:35:00 by lgrillon          #+#    #+#             */
/*   Updated: 2020/09/24 21:37:58 by lgrillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		valide_base(char *str)
{
	int i;
	int j;

	i = 0;
	if (str[i] == '\0' || str[i + 1] == '\0')
		return (0);
	while (str[i])
	{
		j = i + 1;
		if (str[i] < 32 || str[i] > 126 || str[i] == '-' || str[i] == '+')
			return (0);
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	x;
	int			size_b;

	size_b = ft_strlen(base);
	if (valide_base(base))
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			x = nbr * -1;
		}
		else
			x = nbr;
		if ((x / size_b) > 0)
			ft_putnbr_base(x / size_b, base);
		ft_putchar(base[x % size_b]);
	}
}
