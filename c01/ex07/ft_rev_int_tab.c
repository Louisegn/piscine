/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrillon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 12:42:07 by lgrillon          #+#    #+#             */
/*   Updated: 2020/09/14 11:36:30 by lgrillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int a;
	int c;

	a = 0;
	while (a < size)
	{
		size--;
		c = tab[a];
		tab[a] = tab[size];
		tab[size] = c;
		a++;
	}
}
