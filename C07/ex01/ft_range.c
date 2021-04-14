/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaempark <jaempark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 15:29:04 by jaempark          #+#    #+#             */
/*   Updated: 2021/04/15 05:09:40 by jaempark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *numbers;
	int i;

	if (min >= max)
		return (0);
	numbers = (int*)malloc(sizeof(int) * (max - min));
	if (numbers == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		numbers[i] = min;
		i++;
		min++;
	}
	return (numbers);
}
