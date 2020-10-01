/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrillon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 12:01:47 by lgrillon          #+#    #+#             */
/*   Updated: 2020/09/25 16:44:20 by lgrillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int a;
	int res;
	int signe;

	a = 0;
	res = 0;
	signe = 1;
	while (str[a] == ' ' || str[a] == '\f' || str[a] == '\t' || str[a] == '\n'
			|| str[a] == '\r' || str[a] == '\v')
		a++;
	while (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			signe *= -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		res = res * 10 + (str[a] - '0');
		a++;
	}
	return (res * signe);
}
