/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrillon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:56:18 by lgrillon          #+#    #+#             */
/*   Updated: 2020/09/12 11:10:04 by lgrillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_is_negative(int n)
{
	char pos;
	char neg;

	pos = 'P';
	neg = 'N';
	if (n >= 0)
	{
		write(1, &pos, 1);
	}
	else
		write(1, &neg, 1);
}
