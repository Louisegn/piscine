/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeyron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 15:54:21 by jpeyron           #+#    #+#             */
/*   Updated: 2020/09/27 15:43:31 by jpeyron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "utils.h"

char	*ft_strndup(char *src, int n)
{
	int		i;
	char	*copy;

	if (!src)
		return (NULL);
	i = 0;
	if (!(copy = malloc((n + 1) * sizeof(char))))
		return (NULL);
	i = -1;
	while (++i < n)
		copy[i] = src[i];
	copy[i] = '\0';
	return (copy);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	char	*joined;

	if (!s1 || !s2)
		return (NULL);
	if (!(joined = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (*s1)
		joined[i++] = *s1++;
	while (*s2)
		joined[i++] = *s2++;
	return (joined);
}

int		is_sep(char c)
{
	return (c == '\n' || c == '\0');
}

int		count_lines(char *content)
{
	int	i;
	int	lines;

	lines = 0;
	if (!is_sep(content[0]))
		lines++;
	i = 0;
	while (content[++i])
	{
		if (!is_sep(content[i]) && is_sep(content[i - 1]))
			lines++;
	}
	return (lines);
}
