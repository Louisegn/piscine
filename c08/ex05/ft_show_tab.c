/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrillon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 14:44:41 by lgrillon          #+#    #+#             */
/*   Updated: 2020/09/30 14:30:53 by lgrillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int a;

	a = 0;
	while (str[a])
	{
		write(1, &str[a], 1);
		a++;
	}
}

void	ft_putnbr(int nb)
{
	unsigned int x;

	if (nb < 0)
	{
		ft_putchar('-');
		x = nb * -1;
	}
	else
		x = nb;
	if (x > 9)
	{
		ft_putnbr(x / 10);
		ft_putchar(x % 10 + 48);
	}
	else
		ft_putchar(x + 48);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
