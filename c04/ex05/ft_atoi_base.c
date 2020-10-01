/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrillon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 15:59:25 by lgrillon          #+#    #+#             */
/*   Updated: 2020/09/26 15:56:18 by lgrillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		lindex(char c, char *base)
{
	int a;

	a = 0;
	while (base[a])
	{
		if (base[a] == c)
			return (a);
		a++;
	}
	return (-1);
}

int		valide_base(char *str)
{
	int i;
	int j;

	i = 0;
	if (str[i] == '\0' || str[i + 1] == '\0')
		return (0);
	while (str[i])
	{
		j = i + 1;
		if (str[i] < 32 || str[i] > 126 || str[i] == '-' || str[i] == '+'
			|| str[i] == ' ')
			return (0);
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_atoi_base(char *str, char *base)
{
	int a;
	int res;
	int signe;
	int size;

	a = 0;
	res = 0;
	signe = 1;
	size = ft_strlen(base);
	if (valide_base(base) == 0)
		return (0);
	while (str[a] == ' ' || str[a] == '\f' || str[a] == '\t' || str[a] == '\n'
			|| str[a] == '\r' || str[a] == '\v')
		a++;
	while (str[a] == '-' || str[a] == '+')
	{
		signe *= (str[a] == '-') ? -1 : 1;
		a++;
	}
	while (str[a] && lindex(str[a], base) != -1)
	{
		res = ((res * size) + (lindex(str[a], base)));
		a++;
	}
	return (res * signe);
}
