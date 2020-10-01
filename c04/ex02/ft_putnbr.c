/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrillon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 11:03:36 by lgrillon          #+#    #+#             */
/*   Updated: 2020/09/24 14:51:53 by lgrillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
