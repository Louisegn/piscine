/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 18:09:27 by adelille          #+#    #+#             */
/*   Updated: 2020/09/27 19:05:39 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "struct_manager.h"

int		ft_put_error(int i);
void	putstrm(char *str);
int		ft_strlen(char *str);
void	ask_print(char *number, t_number *tab, int i);

#endif
