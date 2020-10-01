/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrillon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 19:46:39 by lgrillon          #+#    #+#             */
/*   Updated: 2020/09/14 11:30:46 by lgrillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int x;
	int y;
	int z;

	x = 0;
	while (size > 0)
	{
		size--;
		y = x + 1;
		while (x < size)
		{
			if (tab[x] > tab[y])
			{
				z = tab[x];
				tab[x] = tab[y];
				tab[y] = z;
			}
			x++;
			y++;
		}
		x = 0;
	}
}
