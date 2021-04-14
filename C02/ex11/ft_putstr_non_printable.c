/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaempark <jaempark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 12:57:27 by jaempark          #+#    #+#             */
/*   Updated: 2021/04/10 15:46:39 by jaempark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_printable(unsigned char c)
{
	if (' ' <= c && c <= '~')
		return (1);
	return (0);
}

void	write_hex(unsigned char c)
{
	c = c + '0';
	if (c > '9')
		c = c + 39;
	write(1, &c, 1);
}

void	print_hex(unsigned char c)
{
	write(1, "\\", 1);
	write_hex((int)c / 16);
	write_hex((int)c % 16);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (!is_printable(*str))
			print_hex(*str);
		else
			write(1, str, 1);
		str++;
	}
}
