/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrillon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 14:14:01 by lgrillon          #+#    #+#             */
/*   Updated: 2020/09/25 11:36:14 by lgrillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int a;
	int b;

	a = 1;
	b = 0;
	if (ac > 1)
	{
		while (a < ac)
		{
			while (av[a][b])
			{
				write(1, &av[a][b], 1);
				b++;
			}
			b = 0;
			write(1, "\n", 1);
			a++;
		}
	}
	return (0);
}
