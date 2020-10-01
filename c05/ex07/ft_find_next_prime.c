/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrillon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 18:29:10 by lgrillon          #+#    #+#             */
/*   Updated: 2020/09/29 17:14:26 by lgrillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	if (nb <= 1)
		return (2);
	while (!(ft_find_prime(nb)))
		nb++;
	return (nb);
}
