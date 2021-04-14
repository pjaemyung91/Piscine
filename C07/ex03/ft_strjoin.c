/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaempark <jaempark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 01:47:49 by jaempark          #+#    #+#             */
/*   Updated: 2021/04/15 05:13:02 by jaempark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


int		get_size(char *str)
{
	int length;

	length = 0;
	while (str[length])
		length ++;
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *result;
	char *str;

	str = (char*)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (0);
}
