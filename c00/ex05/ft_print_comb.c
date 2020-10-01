/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrillon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 14:27:18 by lgrillon          #+#    #+#             */
/*   Updated: 2020/09/12 11:14:39 by lgrillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_racc(char x, char y, char z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
	if (x != '7' || y != '8' || z != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char x;
	char y;
	char z;

	x = '0';
	while (x <= '7' && y != '8' && z != '9')
	{
		y = x + 1;
		while (y < '9')
		{
			z = y + 1;
			while (z <= '9')
			{
				ft_racc(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}
