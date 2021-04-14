/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaempark <jaempark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 18:46:20 by jaempark          #+#    #+#             */
/*   Updated: 2021/04/10 16:29:38 by jaempark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	recur(int nb)
{
	char c;

	if (nb == 0)
		return ;
	c = '0' + nb % 10;
	recur(nb / 10);
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char c;

	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		c = -(nb % 10) + '0';
		recur(-(nb / 10));
		write(1, &c, 1);
	}
	else
	{
		recur(nb);
	}
}
