/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrillon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 16:59:32 by lgrillon          #+#    #+#             */
/*   Updated: 2020/09/21 15:47:31 by lgrillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int k;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (to_find[0] == str[i])
		{
			k = 0;
			while (to_find[k] == str[i + k])
			{
				k++;
				if (to_find[k] == '\0')
					return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}
