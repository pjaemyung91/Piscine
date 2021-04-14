/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaempark <jaempark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 16:18:40 by jaempark          #+#    #+#             */
/*   Updated: 2021/04/10 15:43:00 by jaempark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_uppercase(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int		ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
		if (!is_uppercase(str[i++]))
			return (0);
	return (1);
}
