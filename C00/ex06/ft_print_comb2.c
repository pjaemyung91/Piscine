/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaempark <jaempark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:38:18 by jaempark          #+#    #+#             */
/*   Updated: 2021/04/10 18:51:50 by jaempark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(char *numbers, int a, int b)
{
	write(1, numbers, 7);
	if (numbers[b] == '9')
	{
		numbers[a]++;
		numbers[b] = '0';
	}
	else
	{
		numbers[b]++;
	}
}

void	ft_print_comb2(void)
{
	char numbers[7];

	numbers[0] = '0';
	numbers[1] = '0';
	numbers[2] = ' ';
	numbers[5] = ',';
	numbers[6] = ' ';
	while (numbers[0] != '9' || numbers[1] != '8')
	{
		numbers[3] = numbers[0];
		if (numbers[1] == '9')
		{
			numbers[3]++;
			numbers[4] = '0';
		}
		else
			numbers[4] = numbers[1] + 1;
		while (numbers[3] != '9' || numbers[4] != '9')
		{
			print_num(numbers, 3, 4);
		}
		print_num(numbers, 0, 1);
	}
	write(1, "98 99", 5);
}
