/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaempark <jaempark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 02:52:29 by jaempark          #+#    #+#             */
/*   Updated: 2021/04/12 23:18:10 by jaempark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_num(int num, int length, char *base)
{
	if (num == 0)
		return ;
	print_num((num / length), length, base);
	write(1, &base[num % length], 1);
}

int		check_base(char *base)
{
	int check[256];
	int i;

	i = 0;
	while (i < 256)
	{
		check[i] = 0;
		i++;
	}
	i = 0;
	while (base[i])
	{
		if (check[(int)base[i]] == 1 || base[i] == '+' || base[i] == '-')
			return (0);
		check[(int)base[i]] = 1;
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long	temp;
	int			length;
	char		c;

	length = 0;
	while (base[length])
		length++;
	if (length == 1 || length == 0 || check_base(base) == 0)
		return ;
	temp = nbr;
	if (temp < 0)
	{
		temp *= -1;
		write(1, "-", 1);
	}
	c = base[temp % length];
	print_num(temp / length, length, base);
	write(1, &c, 1);
}
