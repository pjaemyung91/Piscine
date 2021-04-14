/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaempark <jaempark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:27:36 by jaempark          #+#    #+#             */
/*   Updated: 2021/04/15 01:44:02 by jaempark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *numbers;
	int i;

	numbers = (int*)malloc(sizeof(int) * (max - min));
	if (min >= max || numbers == NULL)
		return (0);
	while (min < max)
	{
		numbers[i] = min;
		i++;
		min++;
	}
	*range = numbers;
	return (i);
}
