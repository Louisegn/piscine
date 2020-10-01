/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrillon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 13:59:33 by lgrillon          #+#    #+#             */
/*   Updated: 2020/09/28 12:10:43 by lgrillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int y;

	y = 1;
	if (nb == 0)
		return (0);
	while (y <= nb / y)
	{
		if ((y * y) == nb)
			return (y);
		y++;
	}
	return (0);
}
