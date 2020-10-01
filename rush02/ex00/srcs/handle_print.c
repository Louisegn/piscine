/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeyron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 19:18:06 by jpeyron           #+#    #+#             */
/*   Updated: 2020/09/27 23:05:10 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "utils.h"
#include "struct_manager.h"

void	putstrm_space(char *number, int fi)
{
	if (fi == 0)
		write(1, " ", 1);
	putstrm(number);
}

void	ask_print2(char *number, int i, t_number *tab, int fi)
{
	int	len;

	len = ft_strlen(number);
	if (number[i] != '0' && number[i - 1] != '1')
	{
		putstrm_space(find_in_struct(number[i], '~', 1, tab), fi);
		fi = 0;
	}
	if (len > i + 1)
	{
		if (!(number[i] == '0' && i >= 2
					&& (number[i - 1] == '0' && number[i - 2] == '0')))
			putstrm_space(find_in_struct('1', '~', (len - i), tab), fi);
	}
	if (len == 1 && number[i] == '0')
		putstrm_space(find_in_struct('0', '~', 1, tab), fi);
}

void	ask_print(char *number, t_number *tab, int i)
{
	int	len;
	int	fi;

	fi = 1;
	len = ft_strlen(number);
	while (number[++i])
	{
		if ((len - i) % 3 == 0 && number[i] != '0')
		{
			putstrm_space(find_in_struct(number[i], '~', 1, tab), fi);
			fi = 0;
			putstrm_space(find_in_struct('1', '~', 3, tab), fi);
		}
		else if ((len - i) % 3 == 2 && number[i] != '0')
		{
			if (number[i] == '1')
				putstrm_space(find_in_struct('1', number[i + 1], 2, tab), fi);
			else
				putstrm_space(find_in_struct(number[i], '~', 2, tab), fi);
		}
		else if ((len - i) % 3 == 1)
			ask_print2(number, i, tab, fi);
		if (fi == 1)
			fi = 0;
	}
}
