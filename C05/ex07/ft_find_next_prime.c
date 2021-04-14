/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaempark <jaempark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 16:42:00 by jaempark          #+#    #+#             */
/*   Updated: 2021/04/15 04:51:00 by jaempark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		find_prime(int nb)
{
	long long i;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (2);
	if (nb == 3)
		return (3);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (nb);
}

int		ft_find_next_prime(int nb)
{
	int num;

	num = nb;
	while (find_prime(num) == 0)
	{
		num++;
	}
	return (num);
}
