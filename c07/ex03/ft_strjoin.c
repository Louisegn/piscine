/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrillon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 15:53:33 by lgrillon          #+#    #+#             */
/*   Updated: 2020/10/01 18:19:20 by lgrillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcatsep(char *dest, char **src, char *sep, int size)
{
	int i;
	int j;
	int x;

	i = 0;
	j = 0;
	x = 0;
	while (i < size - 1)
	{
		while (src[i][j])
		{
			dest[x] = src[i][j];
			x++;
			j++;
		}
		j = 0;
		while (sep[j])
			dest[x++] = sep[j++];
		j = 0;
		i++;
	}
	while (src[size - 1][j])
		dest[x++] = src[size - 1][j++];
	dest[x] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		l_strs;
	int		l_sep;
	char	*dest;

	i = 0;
	l_strs = 0;
	while (i < size)
	{
		l_strs += (ft_strlen(strs[i]));
		i++;
	}
	l_sep = (ft_strlen(sep) * (size - 1));
	if (!(dest = (char *)malloc(sizeof(char) * (l_strs + l_sep + 1))))
		return (0);
	dest[0] = '\0';
	return (ft_strcatsep(dest, strs, sep, size));
}
