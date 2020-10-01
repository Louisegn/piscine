/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrillon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 19:14:24 by lgrillon          #+#    #+#             */
/*   Updated: 2020/09/16 20:58:31 by lgrillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hexa(char c)
{
	char *hx;

	hx = "0123456789abcdef";
	write(1, &hx[(unsigned char)c / 16], 1);
	write(1, &hx[(unsigned char)c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			write(1, "\\", 1);
			hexa(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
