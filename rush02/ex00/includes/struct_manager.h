/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeyron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 16:20:45 by jpeyron           #+#    #+#             */
/*   Updated: 2020/09/27 19:00:57 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_MANAGER_H
# define STRUCT_MANAGER_H

typedef struct	s_number
{
	char	*digits;
	char	*letter_num;
}				t_number;

char			*find_in_struct(char fn, char sn, int len, t_number *tab);
t_number		*create_struct(char **lines);

#endif
