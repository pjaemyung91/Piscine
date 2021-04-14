/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaempark <jaempark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 20:56:14 by jaempark          #+#    #+#             */
/*   Updated: 2021/04/14 23:30:20 by jaempark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					get_str_size(char *str)
{
	int length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

void				str_cpy(char *dest, char *src)
{
	while (*src)
		*(dest++) = *(src++);
	*dest = 0;
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *result;
	int			i;

	result = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!result)
		return (0);
	i = 0;
	while (i < ac)
	{
		result[i].size = get_str_size(av[i]);
		result[i].str = (char*)malloc(result[i].size + 1);
		result[i].copy = (char*)malloc(result[i].size + 1);
		str_cpy(result[i].str, av[i]);
		str_cpy(result[i].copy, av[i]);
		i++;
	}
	result[i].str = 0;
	return (result);
}
