/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrillon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 20:09:03 by lgrillon          #+#    #+#             */
/*   Updated: 2020/09/24 09:49:12 by lgrillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *src)
{
	int i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int d_len;
	unsigned int s_len;

	i = 0;
	d_len = (ft_strlen(dest));
	s_len = (ft_strlen(src));
	if (size == 0)
		return (s_len);
	if (size <= d_len)
		return (size + s_len);
	while (src[i] && (d_len + i) < (size - 1))
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (s_len + d_len);
}
