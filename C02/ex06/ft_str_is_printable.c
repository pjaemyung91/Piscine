/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaempark <jaempark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 16:24:47 by jaempark          #+#    #+#             */
/*   Updated: 2021/04/10 15:42:38 by jaempark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_printable(char c)
{
	if (' ' <= c && c <= '~')
		return (1);
	return (0);
}

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
		if (!is_printable(str[i++]))
			return (0);
	return (1);
}
