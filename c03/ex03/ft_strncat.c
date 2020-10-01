/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrillon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 16:13:37 by lgrillon          #+#    #+#             */
/*   Updated: 2020/09/24 11:52:56 by lgrillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (nb == 0)
		return (dest);
	while (dest[i])
		i++;
	while (src[j] && (j < nb))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	while (i < nb && dest[i])
		dest[i++] = '\0';
	dest[i] = '\0';
	return (dest);
}
