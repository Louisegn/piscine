/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeyron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 14:58:07 by jpeyron           #+#    #+#             */
/*   Updated: 2020/09/27 18:54:28 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READ_DICT_H
# define READ_DICT_H

# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# define BUFF_SIZE 4096

char	*ft_strndup(char *src, int n);
char	*ft_strjoin(char *s1, char *s2);
int		count_lines(char *content);

char	**parse_dict(char *file);

#endif
