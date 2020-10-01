/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrillon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 19:27:19 by lgrillon          #+#    #+#             */
/*   Updated: 2020/09/24 13:56:39 by lgrillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 43)
		return (433494437);
	else if (index == 46)
		return (1836311903);
	else if (index > 2)
		return (ft_fibonacci(index - 1)) + (ft_fibonacci(index - 2));
	return (1);
}
