/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrillon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 11:51:14 by lgrillon          #+#    #+#             */
/*   Updated: 2020/09/21 15:36:59 by lgrillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *src)
{
	int a;

	a = 0;
	while (src[a])
		a++;
	return (a);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	x;
	long			s;

	a = 0;
	x = (ft_strlen(src));
	s = size;
	while (src[a] && a < s - 1)
	{
		dest[a] = src[a];
		a++;
	}
	if (a < s)
	{
		dest[a] = '\0';
	}
	return (x);
}
