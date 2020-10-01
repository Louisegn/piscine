/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 14:14:28 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/14 09:10:08 by lgrillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

/*
** This fucntion print step of the nested loop.
*/

void	handle_rush02(int i, int j, int x, int y)
{
	if ((i == 1 && j == 1) || (i ==x && j == 1))
		ft_putchar('A');
	else if ((i == x && j == y) || (i == 1 && j == y))
		ft_putchar('C');
	else if (j == 1 && i > 1 && i < x)
		ft_putchar('B');
	else if (j == y && i > 1 && i < x)
		ft_putchar('B');
	else if (j > 1 && j < y && i > 1 && i < x)
		ft_putchar(' ');
	else if ((j > 1 && i == 1) || (i == x && j < y))
		ft_putchar('B');
}

int		rush(int x, int y)
{
	int i;
	int j;
	int max;

	j = 1;
	i = 1;
	max = 2147483647;
	if (x <= 0 || y <= 0 || x > max || y > max)
		return (0);
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			handle_rush02(i, j, x, y);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
	return (1);
}
