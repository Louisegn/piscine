/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrillon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 18:08:26 by lgrillon          #+#    #+#             */
/*   Updated: 2020/09/29 17:38:35 by lgrillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int res;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	res = (nb * ft_recursive_factorial(nb - 1));
	return (res);
}
