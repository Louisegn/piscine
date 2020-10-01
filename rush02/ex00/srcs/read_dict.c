/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeyron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 14:56:50 by jpeyron           #+#    #+#             */
/*   Updated: 2020/09/27 22:50:59 by jpeyron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "read_dict.h"
#include "utils.h"

int		open_file(char *file_name)
{
	int	fd;

	if ((fd = open(file_name, O_RDONLY)) < 0)
		ft_put_error(1);
	return (fd);
}

void	read_file(char **str, int fd)
{
	int		ret;
	char	buff[BUFF_SIZE + 1];

	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret + 1] = 0;
		if (!(*str = ft_strjoin(*str, buff)))
		{
			free(*str);
			break ;
		}
	}
	if (!*str)
		*str = NULL;
}

char	**get_lines(char *dict_content)
{
	char	**lines;
	int		i;
	int		j;
	int		k;

	if (!(lines = malloc((count_lines(dict_content) + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	k = 0;
	while (dict_content[i])
	{
		j = 0;
		while (dict_content[i + j] && dict_content[i + j] != '\n')
			j++;
		if (j)
		{
			lines[k++] = ft_strndup(&dict_content[i], j);
			i += j;
		}
		else
			i++;
	}
	free(dict_content);
	lines[k - 1] = 0;
	return (lines);
}

char	**parse_dict(char *file)
{
	int		fd;
	char	*dict_content;
	char	**lines;

	if ((fd = open_file(file)) < 0)
		return (NULL);
	if (!(dict_content = malloc(sizeof(char))))
	{
		ft_put_error(1);
		return (NULL);
	}
	read_file(&dict_content, fd);
	if (!dict_content || !(lines = get_lines(dict_content)))
	{
		free(dict_content);
		ft_put_error(1);
		return (NULL);
	}
	return (lines);
}
