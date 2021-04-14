/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaempark <jaempark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 15:59:20 by jaempark          #+#    #+#             */
/*   Updated: 2021/04/10 15:43:26 by jaempark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_numeric(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int		ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i])
		if (!is_numeric(str[i++]))
			return (0);
	return (1);
}
