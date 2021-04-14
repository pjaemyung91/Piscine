/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaempark <jaempark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:02:08 by jaempark          #+#    #+#             */
/*   Updated: 2021/04/10 13:17:56 by jaempark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i + 1 < size && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	while (src[i] != 0)
	{
		i++;
	}
	return (i);
}
