/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaempark <jaempark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 18:16:31 by jaempark          #+#    #+#             */
/*   Updated: 2021/04/10 21:57:28 by jaempark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_last(char *num, int nsize)
{
	int i;

	i = num[0] - '0';
	if ((10 - nsize) == i)
		return (1);
	return (0);
}

void	recur(char *num, int n, int nsize, char cnum)
{
	if (cnum > '9')
		return ;
	else
	{
		num[nsize] = cnum;
		nsize++;
	}
	if (nsize < n)
		recur(num, n, nsize, cnum + 1);
	else
	{
		write(1, num, nsize);
		if (check_last(num, nsize) == 0)
			write(1, ", ", 2);
	}
	recur(num, n, nsize - 1, cnum + 1);
}

void	ft_print_combn(int n)
{
	char num[10];

	recur(num, n, 0, '0');
}

int main()
{
	ft_print_combn(3);
}
