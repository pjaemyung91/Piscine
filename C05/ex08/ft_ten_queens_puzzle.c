/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaempark <jaempark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 18:23:04 by jaempark          #+#    #+#             */
/*   Updated: 2021/04/14 16:44:37 by jaempark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_col_location[10];
int		g_count;

int		is_able(int row)
{
	int i;
	int abs;

	i = 0;
	while (i < row)
	{
		abs = (int)(g_col_location[row] - g_col_location[i]);
		if (abs < 0)
			abs = -abs;
		if (g_col_location[i] == g_col_location[row] || row - i == abs)
			return (0);
		i++;
	}
	return (1);
}

int		recur_queens(int row)
{
	int i;

	i = 0;
	if (row == 10)
	{
		while (i < 10)
		{
			write(1, &g_col_location[i], 1);
			i++;
		}
		write(1, "\n", 1);
		g_count++;
	}
	else
	{
		while (i < 10)
		{
			g_col_location[row] = i + '0';
			if (is_able(row))
				recur_queens(row + 1);
			i++;
		}
	}
	return (g_count);
}

int		ft_ten_queens_puzzle(void)
{
	recur_queens(0);
	return (g_count);
}
