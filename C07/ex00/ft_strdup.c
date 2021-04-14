/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaempark <jaempark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 14:42:10 by jaempark          #+#    #+#             */
/*   Updated: 2021/04/14 15:24:37 by jaempark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	long long	length;
	char		*result;
	int			i;

	while (src[length])
		length++;
	result = (char*)malloc(length + 1);
	i = 0;
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	result[i] = 0;
	return (result);
}
